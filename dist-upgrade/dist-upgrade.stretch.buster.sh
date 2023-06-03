# https://djangocas.dev/blog/upgrade-existing-jessie-to-buster-without-re-image/

sudo sed -i 's/stretch/buster/g' /etc/apt/sources.list
sudo sed -i 's/stretch/buster/g' /etc/apt/sources.list.d/raspi.list
sudo apt-get update
sudo apt-get -y dist-upgrade
