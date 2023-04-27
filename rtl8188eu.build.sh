# https://forums.raspberrypi.com/viewtopic.php?t=331841
# https://forums.raspberrypi.com/viewtopic.php?t=332364
# https://github.com/ivanovborislav/rtl8188eu
# https://qiita.com/nuruposan/items/84a8d6bc1911b32a915e

# https://github.com/ivanovborislav/rtl8188eu
sudo apt-get install bc build-essential
git clone https://github.com/RPi-Distro/rpi-source
rpi-source/rpi-source
sudo sh -c "git clone https://github.com/ivanovborislav/rtl8188eu.git /usr/src/rtl8188eu-$(uname -r)"
sudo apt-get install dkms
cd /usr/src/rtl8188eu-$(uname -r)
sudo sh -c "sed -i 's@CONFIG_PLATFORM_I386_PC = y@CONFIG_PLATFORM_I386_PC = n@' Makefile"
sudo sh -c "sed -i 's@CONFIG_PLATFORM_RPI_ARM = n@CONFIG_PLATFORM_RPI_ARM = y@' Makefile"
sudo dkms add -m rtl8188eu -v $(uname -r)
sudo dkms autoinstall
dkms status
