# https://www.raspberrypi.org/forums/viewtopic.php?t=205016
sudo apt-get install usbmount

# https://raspberrypi.stackexchange.com/questions/100312/raspberry-4-usbmount-not-working
sudo mkdir -p /etc/systemd/system/systemd-udevd.service.d

sudo sh -c "echo \[Service\] > /etc/systemd/system/systemd-udevd.service.d/00-my-custom-mountflags.conf"
sudo sh -c "echo PrivateMounts=no >> /etc/systemd/system/systemd-udevd.service.d/00-my-custom-mountflags.conf"
