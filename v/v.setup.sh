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
