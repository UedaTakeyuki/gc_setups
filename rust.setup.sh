#!/bin/bash

curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh

# set path to .profile
# don't expand variable. https://linux.just4fun.biz/?%E9%80%86%E5%BC%95%E3%81%8D%E3%82%B7%E3%82%A7%E3%83%AB%E3%82%B9%E3%82%AF%E3%83%AA%E3%83%97%E3%83%88/%E3%83%92%E3%82%A2%E3%83%89%E3%82%AD%E3%83%A5%E3%83%A1%E3%83%B3%E3%83%88%E5%86%85%E3%81%AE%E5%A4%89%E6%95%B0%E3%82%92%E5%B1%95%E9%96%8B%E3%81%97%E3%81%AA%E3%81%84%E6%96%B9%E6%B3%95
if [[ ! "$PATH" =~ ${HOME}/.cargo/bin ]]; then
  cat << 'EOF' >>~/.profile
# set PATH so it includes cargo/bin bin if it exists
if [ -d "${HOME}/.cargo/bin" ] ; then
    PATH="${HOME}/.cargo/bin:$PATH"
fi
EOF

  echo do source ~/.profile to set cargo/bin in path.

fi

