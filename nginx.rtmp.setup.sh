sudo apt-get install build-essential libpcre3 libpcre3-dev libssl-dev

git clone https://github.com/arut/nginx-rtmp-module.git

wget https://nginx.org/download/nginx-1.10.3.tar.gz
tar -xvzf nginx-1.10.3.tar.gz
cd nginx-1.10.3
sudo ./configure --prefix=/var/www --sbin-path=/usr/sbin/nginx \
--conf-path=/etc/nginx/nginx.conf \
--error-log-path=/var/log/nginx/error.log \
--http-log-path=/var/log/nginx/access.log \
--pid-path=/var/run/nginx.pid \
--lock-path=/var/run/nginx.lock \
--prefix=/usr/local/nginx \
--user=nginx \
--group=nginx \
--with-http_ssl_module \
--with-http_realip_module \
--with-http_addition_module \
--with-http_sub_module \
--with-http_dav_module \
--with-http_flv_module \
--with-http_mp4_module \
--with-http_gzip_static_module \
--with-http_random_index_module \
--with-http_secure_link_module \
--with-http_stub_status_module \
--with-ipv6 \
--add-module=../nginx-rtmp-module
sudo make -j4
sudo make install
cd ..
