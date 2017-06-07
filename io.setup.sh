mkdir io
cd io
wget http://iobin.suspended-chord.info/linux/iobin-linux-armhf-deb-current.zip
unzip iobin-linux-armhf-deb-current.zip
sudo apt-get install libjpeg62-turbo libjpeg62-turbo-dev
sudo apt-get install build-essential cmake libreadline-dev libssl-dev ncurses-dev libffi-dev zlib1g-dev libpcre3-dev libpng-dev libmysqlclient-dev libmemcached-dev libtokyocabinet-dev libsqlite3-dev libdbi0-dev libpq-dev libgmp3-dev libogg-dev libvorbis-dev libtaglib-cil-dev libtag1-dev libtheora-dev libsamplerate0-dev libloudmouth1-dev libsndfile1-dev libflac-dev libgl1-mesa-dev libglu1-mesa-dev freeglut3-dev libxmu-dev libxi-dev libxml2-dev libyajl-dev uuid-dev liblzo2-dev zlib1g-dev libevent-dev
sudo dpkg -i IoLanguage-2013.11.04-Linux-armhf.deb
