sudo sed -i 's/jessie/stretch/g' /etc/apt/sources.list
sudo sed -i 's/jessie/stretch/g' /etc/apt/sources.list.d/raspi.list
sudo apt-get update
sudo apt-get -y dist-upgrade
# install new Chinese and Japanese fonts
sudo apt-get install -y fonts-droid-fallback
# purge PulseAudio
sudo apt-get -y purge "pulseaudio*"
