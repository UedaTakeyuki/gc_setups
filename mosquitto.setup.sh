# refer https://www.justinribeiro.com/chronicle/2014/10/22/mosquitto-libwebsockets-google-compute-engine-setup/

# libwebsokets-dev is unmatch with mosquitto.
#sudo apt-get install uuid-dev libwebsockets-dev libssl-dev libc-ares-dev
sudo apt-get install uuid-dev libssl-dev libc-ares-dev

#libwebsockets, use chrome37 version intentionary.
wget https://github.com/warmcat/libwebsockets/archive/v1.3-chrome37-firefox30.tar.gz
tar zxvf v1.3-chrome37-firefox30.tar.gz
cd libwebsockets-1.3-chrome37-firefox30
mkdir build; cd build;
cmake .. -DLIB_SUFFIX=64
sudo make install
sudo ln -s /usr/local/lib64/libwebsockets.so.4.0.0 /usr/lib/libwebsockets.so.4.0.0
sudo ln -s /usr/local/lib64/libwebsockets.so /usr/lib/libwebsockets.so
sudo ln -s /usr/local/lib64/libwebsockets.a /usr/lib/libwebsockets.a

#mosquitto 1.4.4 (with websocket, latest version seems more confusing.)
wget https://mosquitto.org/files/source/mosquitto-1.4.4.tar.gz
tar -xvzf mosquitto-1.4.4.tar.gz
cd mosquitto-1.4.4
sudo sed -i 's|^WITH_WEBSOCKETS:=no|^WITH_WEBSOCKETS:=yes|' config.mk
make binary
sudo make install
sh -c "echo listener 1883 >> /etc/mosquitto/mosquitto.conf"
sh -c "echo listener 10001 127.0.0.1 >> /etc/mosquitto/mosquitto.conf"
sh -c "echo protocol websockets >> /etc/mosquitto/mosquitto.conf"
