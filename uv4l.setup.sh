#!/bin/bash
# refer https://www.linux-projects.org/uv4l/installation/

version_codename=`cat /usr/lib/os-release | grep VERSION_CODENAME | cut -d "=" -f 2`
echo $version_codename

if [ $version_codename = wheezy || $version_codename = jessie ]; then
  curl https://www.linux-projects.org/listing/uv4l_repo/lrkey.asc | sudo apt-key add -
  if [ $version_codename = wheezy ]; then
    sudo sh -c "echo deb https://www.linux-projects.org/listing/uv4l_repo/raspbian/ wheezy main >> /etc/apt/sources.list"
  elif [ $version_codename = jessie ]; then
    sudo sh -c "echo deb https://www.linux-projects.org/listing/uv4l_repo/raspbian/ jessie main >> /etc/apt/sources.list"
  fi
  sudo apt-get update
elif [ $version_codename = stretch ]; then
  :
elif [ $version_codename = buster ]; then
  echo buster
  curl https://www.linux-projects.org/listing/uv4l_repo/lpkey.asc | sudo apt-key add -
  sudo sh -c "echo deb https://www.linux-projects.org/listing/uv4l_repo/raspbian/stretch stretch main >> /etc/apt/sources.list"
  sudo apt-get update
fi

popd
rm -rf uv4linst

sudo apt-get install -y uv4l uv4l-raspicam
sudo apt-get install -y uv4l-raspicam-extras
sudo service uv4l_raspicam restart
sudo apt-get install -y uv4l-tc358743-extras

