# Install Beautifulsoup4
#pip3 install beautifulsoup4

# get latest golang version
#ver=`python3 go_latest_version.py`
ver=`./go_latest_version`
echo Install $ver

file=${ver}.linux-armv6l.tar.gz

wget https://golang.org/dl/${file}
sudo tar -C /usr/local -xzf ${file}
rm ${file}

# set path to .profile
# don't expand variable. https://linux.just4fun.biz/?%E9%80%86%E5%BC%95%E3%81%8D%E3%82%B7%E3%82%A7%E3%83%AB%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%97%E3%83%88/%E3%83%92%E3%82%A2%E3%83%89%E3%82%AD%E3%83%A5%E3%83%A1%E3%83%B3%E3%83%88%E5%86%85%E3%81%AE%E5%A4%89%E6%95%B0%E3%82%92%E5%B1%95%E9%96%8B%E3%81%97%E3%81%AA%E3%81%84%E6%96%B9%E6%B3%95
if [[ ! "$PATH" =~ /usr/local/go/bin ]]; then
  cat << 'EOF' >>~/.profile

# set PATH so it includes go bin if it exists
if [ -d "/usr/local/go/bin" ] ; then
    PATH="/usr/local/go/bin:$PATH"
fi
EOF
fi

# set PATH so it includes the the path to where a binary file compiled by the command "go install" is installed. 
cat << 'EOF2' >>~/.profile
# set PATH so it includes the the path to where a binary file compiled by the command "go install" is installed. 
if [ -n "`go env GOBIN`" ]; then
    PATH=`go env GOBIN`:$PATH
fi
if [ -n "`go env GOPATH`" ]; then
    PATH=`go env GOPATH`/bin:$PATH
elif [ -n "$HOME" ]; then
    PATH=$HOME/go/bin
fi
EOF2

echo do source ~/.profile to set go in path.

## add export to /etc/profile (for system-wide use) or ~/.profiley
#export PATH=$PATH:/usr/local/go/bin
#export GOPATH=$HOME/go
#export GOBIN=$GOPATH/bin
