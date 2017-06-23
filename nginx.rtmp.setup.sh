git clone https://github.com/arut/nginx-rtmp-module.git

wget https://nginx.org/download/nginx-1.10.3.tar.gz
tar -xvzf nginx-1.10.3.tar.gz
cd nginx-1.10.3
sudo ./configure --prefix=/var/www --sbin-path=/usr/sbin/nginx --conf-path=/etc$
sudo make -j4
sudo make install
cd ..
