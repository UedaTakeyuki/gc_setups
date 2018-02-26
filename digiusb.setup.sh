# refer https://qiita.com/UedaTakeyuki/items/7096f428f098d329dc5a

# install libudev-dev & ruby-dev
sudo apt-get install libudev-dev # for libusb
sudo apt-get install ruby-dev # for digiusb
sudo apt-get install rubygems

# install libusb
wget http://downloads.sourceforge.net/project/libusb/libusb-1.0/libusb-1.0.21/libusb-1.0.21.tar.bz2
tar jxf libusb-1.0.21.tar.bz2
cd libusb-1.0.21/
./configure
make
sudo make install
cd ..

# install digiusb
sudo gem install digiusb


