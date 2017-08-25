if [ $# -ne 1 ]; then
  echo "usage: $0 minion-master"
  exit 1
fi
master=$1
serial=`python -m piserialnumber`
uuid=`python -c 'import uuid; print uuid.uuid1()'`

# remove key files
sudo rm /etc/salt/pki/minion/minion_master.pub
sudo rm /etc/salt/pki/minion/minion.pem
sudo rm /etc/salt/pki/minion/minion.pub

# make new key file
sudo openssl genrsa 2048 > /etc/salt/pki/minion/minion.pem
sudo openssl rsa -in /etc/salt/pki/minion/minion.pem -pubout -out /etc/salt/pki/minion/minion.pub

# settings
sudo sed -i "s/master: [a-zA-Z\.0-9]*/master: ${master}/" /etc/salt/minion
#sudo sed -i "s/#id:/id: gc16_${serial}/" /etc/salt/minion
sudo sed -i "s/id: [a-zA-Z0-9_\-]*/id: gc_${uuid}/" /etc/salt/minion
sudo systemctl restart salt-minion
