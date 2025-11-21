#!/bin/bash

usage_exit() {
	echo "Usage: $0 [-h] [path] " 1>&2
	echo "  [-?]:   Show this usage." 1>&2
	echo "  [path]: Install zig to the path." 1>&2
	exit 1
}

case $# in
  0) # install to ~/rustling
     path=~
     ;;
  1) # install to path/rustling
     if [ $1 = "-?" ];then
       usage_exit
     else
       path=$1
     fi
     ;;
  *) usage_exit
     ;;
esac

# download JSON version release note
wget https://ziglang.org/download/index.json -O /tmp/zigjson

# install jq
$(dirname $0)/jq.setup.sh

# get version string from downloaded JSON version release note
version=$(cat /tmp/zigjson | jq '.master.version' | tr -d '"')
zig_path=zig-${version}
zig_expanded=zig-arm-linux-${version}
zig_tarball=${zig_expanded}.tar.xz
echo $version
wget $(cat /tmp/zigjson | jq '.master."arm-linux".tarball' | tr -d '"') -O $path/${zig_tarball}
tar Jxfv $path/${zig_tarball} -C $path
mv $path/${zig_expanded} $path/${zig_path}
rm $path/${zig_tarball}

# unlink old /usr/local/zig
if [ -f /usr/local/zig ]; then
  sudo unlink /usr/local/zig
fi
sudo ln -s $path/${zig_path} /usr/local/zig

# set path to .profile
# don't expand variable. https://linux.just4fun.biz/?%E9%80%86%E5%BC%95%E3%81%8D%E3%82%B7%E3%82%A7%E3%83%AB%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%97%E3%83%88/%E3%83%92%E3%82%A2%E3%83%89%E3%82%AD%E3%83%A5%E3%83%A1%E3%83%B3%E3%83%88%E5%86%85%E3%81%AE%E5%A4%89%E6%95%B0%E3%82%92%E5%B1%95%E9%96%8B%E3%81%97%E3%81%AA%E3%81%84%E6%96%B9%E6%B3%95
if [[ ! "$PATH" =~ /usr/local/zig ]]; then
  cat << 'EOF' >>~/.profile

# set PATH so it includes zig if it exists
if [ -d "/usr/local/zig" ] ; then
    PATH="/usr/local/zig:$PATH"
fi
EOF

  echo do source ~/.profile to set zig in path.

fi

# remove redundant files
rm /tmp/zigjson
