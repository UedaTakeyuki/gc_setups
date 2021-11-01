#!/bin/bash

################################################################
# 
# V install script
# 
# usage: ./v.setup.sh [--nogl]
#
#
# @author Dr. Takeyuki UEDA
# @copyright Copyright© Atelier UEDA 2020 - All rights reserved.
#

usage_exit() {
	echo "Usage: $0 [-n] " 1>&2
	echo "  [-n]:   Don't install glfw. For CUI env." 1>&2
	exit 1
}

install_v(){
	# https://github.com/vlang/v
	git clone https://github.com/vlang/v ~/v
	cd ~/v

	# added at 2021.02.11
	# https://github.com/vlang/v/issues/7654
	cd thirdparty
	git clone git://repo.or.cz/tinycc.git
	mv tinycc tcc
	cd tcc 
	./configure --prefix=/var/tmp/tcc --crtprefix=/var/tmp/tcc/lib:/usr/lib64:/usr/lib/arm-linux-gnueabihf --libpaths=/var/tmp/tcc/lib:/usr/lib/arm-linux-gnueabihf:/usr/lib64:/usr/lib:/lib/arm-linux-gnueabihf:/lib:/usr/local/lib/arm-linux-gnueabihf:/usr/local/lib --debug
	cd ..
	cd ..

	make
	sudo ./v symlink
}

install_glfw(){
	# glfw and freetype
	sudo apt install libglfw3 libglfw3-dev libfreetype6-dev libssl-dev
}

NOGL=false

while getopts n OPT
do
  case $OPT in
    n)
      NOGL=true
      ;;
    \?) usage_exit
      ;;
  esac
done

install_v

if ! $NOGL ; then
  install_glfw
fi

sudo apt-get install libxi-dev libxcursor-dev

