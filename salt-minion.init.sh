if [ $# -ne 1 ]; then
  echo "usage: $0 minion-master"
  exit 1
fi
master=$1
serial=`python -m piserialnumber`

# rpurge previous salt
sudo apt-get purge salt-common salt-minion
sudo rm -rf /etc/salt

# reinstall salt-common & salt-minion
sudo apt-get install salt-common/stretch salt-minion/stretch

# settings
sudo sed -i "s/#master: salt/master: ${master}/" /etc/salt/minion
sudo sed -i "s/#id:/id: gc16_${serial}/" /etc/salt/minion
sudo systemctl restart salt-minion