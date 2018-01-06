# refer https://github.com/samjabrahams/tensorflow-on-raspberry-pi
# For Python 2.7
sudo apt-get install python-pip python-dev
#wget https://github.com/samjabrahams/tensorflow-on-raspberry-pi/raw/master/bin/tensorflow-0.10.0-cp27-none-linux_armv7l.whl
#sudo pip install tensorflow-0.10.0-cp27-none-linux_armv7l.whl
#rm -rf tensorflow-0.10.0-cp27-none-linux_armv7l.whl
wget https://github.com/samjabrahams/tensorflow-on-raspberry-pi/releases/download/v1.1.0/tensorflow-1.1.0-cp27-none-linux_armv7l.whl
sudo pip install tensorflow-1.1.0-cp27-none-linux_armv7l.whl
rm -rf tensorflow-1.1.0-cp27-none-linux_armv7l.whl
sudo pip uninstall mock
sudo pip install mock

# For Python 3.3+
sudo apt-get install python3-pip python3-dev
#wget https://github.com/samjabrahams/tensorflow-on-raspberry-pi/raw/master/bin/tensorflow-0.10.0-py3-none-any.whl
#sudo pip3 install tensorflow-0.10.0-py3-none-any.whl
#rm -rf tensorflow-0.10.0-py3-none-any.whl
wget https://github.com/samjabrahams/tensorflow-on-raspberry-pi/releases/download/v1.1.0/tensorflow-1.1.0-cp34-cp34m-linux_armv7l.whl
sudo pip3 install tensorflow-1.1.0-cp34-cp34m-linux_armv7l.whl
rm -rf tensorflow-1.1.0-cp34-cp34m-linux_armv7l.whl
sudo pip3 uninstall mock
sudo pip3 install mock
