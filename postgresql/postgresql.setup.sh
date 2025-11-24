# install required libraries
sudo apt-get install build-essential libssl-dev zlib1g-dev bison flex

# clone repository
git clone https://github.com/postgres/postgres.git
cd postgres

# build & install
./configure --prefix=/usr/local/pgsql # set to insall to /usr/local/pgsql
make
sudo make install

# set path
if [[ ! "$PATH" =~ /usr/local/pgsql ]]; then
  cat << 'EOF' >>~/.profile

# set PATH so it includes zig if it exists
if [ -d "/usr/local/pgsql" ] ; then
    PATH="/usr/local/pgsql:$PATH"
fi
EOF

  echo do source ~/.profile to set pgsql in path.

fi


