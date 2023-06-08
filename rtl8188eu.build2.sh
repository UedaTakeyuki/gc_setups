# install requires
sudo apt-get install bc build-essential dkms

# get rpi-source
#./rpi-source.get.sh

# Prevent loading old driver r8188eu
sudo sh -c "echo blacklist r8188eu > /etc/modprobe.d/50-8188eu.conf"

# clone rtl8188eus
# avoid https://github.com/aircrack-ng/rtl8188eus/issues/234
# git clone https://github.com/aircrack-ng/rtl8188eus.git
git clone https://github.com/gglluukk/rtl8188eus.git

# build
cd rtl8188eus
sudo ./dkms-install.sh

