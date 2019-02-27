ver=1.12
file=go${ver}.linux-armv6l.tar.gz

#wget https://golang.org/dl/go1.10.3.linux-armv6l.tar.gz
wget https://golang.org/dl/${file}
#sudo tar -C /usr/local -xzf go1.10.3.linux-armv6l.tar.gz
sudo tar -C /usr/local -xzf ${file}
#rm go1.10.3.linux-armv6l.tar.gz
rm ${file}


## add export to .bashrc
#export PATH=$PATH:/usr/local/go/bin
#export GOPATH=$HOME/go
