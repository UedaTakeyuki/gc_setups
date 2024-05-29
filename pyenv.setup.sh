# install pyenv
curl https://pyenv.run | bash

# set pyenv to .profile for login shells
cat << 'EOF' >>~/.profile

# Set up your shell environment for Pyenv
export PYENV_ROOT="$HOME/.pyenv"
[[ -d $PYENV_ROOT/bin ]] && export PATH="$PYENV_ROOT/bin:$PATH"
eval "$(pyenv init -)"
EOF

# set pyenv to .bashrc for interactive shells
cat << 'EOF2' >>~/.bashrc 

# Set up your shell environment for Pyenv
export PYENV_ROOT="$HOME/.pyenv"
[[ -d $PYENV_ROOT/bin ]] && export PATH="$PYENV_ROOT/bin:$PATH"
eval "$(pyenv init -)"
EOF2
