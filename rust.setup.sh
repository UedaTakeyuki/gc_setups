#!/bin/bash

curl --proto '=https' --tlsv1.2 -sSf https://sh.rustup.rs | sh

if [[ ! "$PATH" =~ ${HOME}/.cargo/bin ]]; then
  cat << EOF >>~/.profile
# set PATH so it includes cargo/bin bin if it exists
if [ -d "${HOME}/.cargo/bin" ] ; then
    PATH="${HOME}/.cargo/bin:$PATH"
fi
EOF

  echo do source ~/.profile to set cargo/bin in path.

fi

