
# sudo apt-get -y install redis
# sudo apt-get -y autoremove redis
# sudo apt-get -y remove redis-server redis-tools zlib1g-dev
# http://grainier.net/how-to-uninstall-redis-server-from-ubuntu/

# https://redis.io/topics/quickstart

wget http://download.redis.io/redis-stable.tar.gz
tar xvzf redis-stable.tar.gz
cd redis-stable
make
sudo make install
sudo mkdir /etc/redis
sudo mkdir /var/redis
sudo cp utils/redis_init_script /etc/init.d/redis_6379
sudo cp redis.conf /etc/redis/6379.conf
sudo mkdir /var/redis/6379
sudo update-rc.d redis_6379 defaults
cd ..
rm -rf redis-stable.tar.gz
rm -rf redis-stable
