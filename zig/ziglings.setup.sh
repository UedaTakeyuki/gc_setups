#!/bin/bash

usage_exit() {
	echo "Usage: $0 [-h] [path] " 1>&2
	echo "  [-?]:   Show this usage." 1>&2
	echo "  [path]: Install ziglings to the path." 1>&2
	exit 1
}

case $# in
  0) # install to ~/rustling
     path=~/ziglings
     git clone https://codeberg.org/ziglings/exercises.git $path
     ;;
  1) # install to path/rustling
     if [ $1 = "-?" ];then
       usage_exit
     else
       path=$1/ziglings
       git clone https://codeberg.org/ziglings/exercises.git $path
     fi
     ;;
  *) usage_exit
     ;;
esac
