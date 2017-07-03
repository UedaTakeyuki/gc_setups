if [ $# -ne 1 ]; then
  echo "usage: $0 minion-master"
  exit 1
fi
master=$1
serial=`python -m piserialnumber`

# remove key files
sudo rm /etc/salt/pki/minion/minion_master.pub
sudo rm /etc/salt/pki/minion/minion.pem
sudo rm /etc/salt/pki/minion/minion.pub

# make new key file
sudo openssl genrsa 2048 > /etc/salt/pki/minion/minion.pem
sudo openssl rsa -in /etc/salt/pki/minion/minion.pem -pubout -out /etc/salt/pki/minion/minion.pub

# settings
sudo sed -i "s/#master: salt/master: ${master}/" /etc/salt/minion
sudo sed -i "s/#id:/id: gc16_${serial}/" /etc/salt/minion
sudo systemctl restart salt-minion
