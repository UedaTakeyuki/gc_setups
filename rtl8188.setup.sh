kernel_release=`uname -r`
kernel_release=${kernel_release%+}-
echo $kernel_release

kernel_version=`uname -v`
kernel_version=`echo ${kernel_version#\#} | cut -f 1 -d ' '`
echo $kernel_version

downloadfile=8188eu-${kernel_release}${kernel_version}.tar.gz
url=http://downloads.fars-robotics.net/wifi-drivers/8188eu-drivers/${downloadfile}
echo $url

wget $url
tar -xvzf $downloadfile
./install.sh 
