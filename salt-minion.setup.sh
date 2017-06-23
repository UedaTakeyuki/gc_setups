# https://docs.saltstack.com/en/develop/topics/installation/debian.html
sudo sh -c "echo 'deb http://archive.raspbian.org/raspbian/ stretch main' >> /etc/apt/sources.list"
sudo sh -c "echo 'http://httpredir.debian.org/debian jessie-backports main contrib' >> /etc/apt/sources.list"
sudo sh -c "echo 'APT::Default-Release "jessie";' > /etc/apt/apt.conf.d/10apt"

sudo apt-get update

sudo apt-get install python-systemd/jessie-backports python-zmq python-tornado/stretch salt-common/stretch
sudo apt-get install salt-minion/stretch
