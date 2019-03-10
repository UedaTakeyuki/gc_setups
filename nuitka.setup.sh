# http://www.nuitka.net/pages/download.html

sudo apt-get install lsb-release
# Setup Stable version

CODENAME=`grep UBUNTU_CODENAME /etc/os-release | cut -d= -f2`
if ["$CODENAME"] = ""]
then
   CODENAME=`lsb_release -c -s`
fi;
sudo wget -O - http://nuitka.net/deb/archive.key.gpg | apt-key add - 
sudo echo >/etc/apt/sources.list.d/nuitka.list "deb http://nuitka.net/deb/stable/$CODENAME $CODENAME main"
sudo apt-get update
sudo apt-get install nuitka


# Setup Develop version
#CODENAME=`grep UBUNTU_CODENAME /etc/os-release | cut -d= -f2`
#if ["$CODENAME"] = ""]
#then
#   CODENAME=`lsb_release -c -s`
#fi;
#sudo wget -O - http://nuitka.net/deb/archive.key.gpg | apt-key add -
#sudo echo >/etc/apt/sources.list.d/nuitka.list "deb http://nuitka.net/deb/develop/$CODENAME $CODENAME main"
#sudo apt-get update
#sudo apt-get install nuitka
