# https://tkyonezu.com/iot/raspberry-pi-os-lite%E3%81%AE%E3%83%87%E3%82%B9%E3%82%AF%E3%83%88%E3%83%83%E3%83%97%E5%8C%96/
sudo apt install -y xserver-xorg raspberrypi-ui-mods

# for gui apps, you can commnet out if not necessary
sudo apt install -y rp-prefapps

# for chrome, you can commne out if not necessaryt
sudo apt install -y chromium-browser

# https://yueno.net/xoops/modules/xpwiki/?PC%2FRaspberryPi%2FLinux%E3%82%92%E5%8B%95%E3%81%8B%E3%81%97%E3%81%A6%E3%81%BF%E3%82%8B%2F%E8%87%AA%E5%8B%95%E3%83%AD%E3%82%B0%E3%82%A4%E3%83%B3%E3%81%A8%E8%87%AA%E5%8B%95%E5%AE%9F%E8%A1%8C#z26aa43c
systemctl set-default graphical.target
