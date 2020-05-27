# Install Beautifulsoup4
pip3 install beautifulsoup4

# get latest golang version
ver=`python3 go_latest_version.py`
echo Install $ver

file=${ver}.linux-armv6l.tar.gz

wget https://golang.org/dl/${file}
sudo tar -C /usr/local -xzf ${file}
rm ${file}

if [[ ! "$PATH" =~ /usr/local/go/bin ]]; then
  cat << EOF >>~/.profile

# set PATH so it includes go bin if it exists
if [ -d "/usr/local/go/bin" ] ; then
    PATH="/usr/local/go/bin:$PATH"
fi
EOF

  echo do source ~/.profile to set go in path.

fi

## add export to /etc/profile (for system-wide use) or ~/.profiley
#export PATH=$PATH:/usr/local/go/bin
#export GOPATH=$HOME/go
#export GOBIN=$GOPATH/bin
