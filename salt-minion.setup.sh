# https://repo.saltstack.com/#raspbian
wget -O - https://repo.saltstack.com/apt/debian/8/armhf/latest/SALTSTACK-GPG-KEY.pub | sudo apt-key add -
sudo sh -c "echo deb http://repo.saltstack.com/apt/debian/8/armhf/latest jessie main > /etc/apt/sources.list.d/saltstack.list"
sudo apt-get update
sudo apt-get install salt-minion
