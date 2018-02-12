c_path=`pwd`
# x264
git clone git://git.videolan.org/x264
cd x264
#./configure --prefix=${c_path}/output --enable-static  --disable-opencl
#./configure --prefix=${c_path}/output --enable-shared --disable-opencl
./configure --enable-shared --disable-opencl
make -j4
sudo make install
cd ..

# ALSA
wget ftp://ftp.alsa-project.org/pub/lib/alsa-lib-1.1.2.tar.bz2
tar xjvf alsa-lib-1.1.2.tar.bz2
cd alsa-lib-1.1.2/
#./configure --prefix=${c_path}/output
./configure
make -j4
sudo make install
cd ..

# libfaac
#wget  http://downloads.sourceforge.net/project/faac/faac-src/faac-1.28/faac-1.28.tar.bz2
#tar  xvfj   faac-1.28.tar.bz2
#cd  faac-1.28
##./configure   --prefix=${c_path}/output   --enable-static  --disable-shared  --with-mp4v2
##./configure   --prefix=${c_path}/output   --with-mp4v2
#./configure   --with-mp4v2
#make -j4
#sudo make install
#cd ..

# ffmpeg
# refer http://www.ffmpeg-archive.org/ERROR-OMX-Core-h-header-not-found-td4681495.html for omx
sudo apt-get install pkg-config yasm libomxil-bellagio-dev
git clone https://git.ffmpeg.org/ffmpeg.git ffmpeg
cd ffmpeg
#./configure --enable-gpl --enable-libx264 --enable-nonfree\
#            --enable-static\
#            --extra-cflags="-I${c_path}/output/include"\
#            --extra-ldflags="-L${c_path}/output/lib"\
#            --extra-libs=-ldl
#./configure --enable-gpl --enable-libx264 --enable-nonfree\
#            --extra-cflags="-I${c_path}/output/include"\
#            --extra-ldflags="-L${c_path}/output/lib"\
#            --extra-libs=-ldl
#./configure --enable-gpl --enable-libx264 --enable-nonfree --extra-libs=-ldl
./configure --enable-gpl --enable-libx264 --enable-nonfree --enable-mmal --enable-omx-rpi --enable-omx --extra-libs=-ldl
make -j4
sudo make install

# for tell the path of .so
sudo ldconfig
