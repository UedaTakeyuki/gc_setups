# install hostapd_mac80211
sudo apt-get install hostapd

# install hostapd_r8188eu
git clone https://github.com/PlantDaddy/hostapd-rtl8188.git /home/pi/hostapd-rtl8188

# For buster, unmask
# https://github.com/raspberrypi/documentation/issues/1018
sudo systemctl unmask hostapd
sudo systemctl enable hostapd
sudo systemctl start hostapd
