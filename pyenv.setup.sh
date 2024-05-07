curl https://pyenv.run | bash

# set path to .profile
cat << 'EOF' >>~/.profile

# Set up your shell environment for Pyenv
export PYENV_ROOT="$HOME/.pyenv"
[[ -d $PYENV_ROOT/bin ]] && export PATH="$PYENV_ROOT/bin:$PATH"
eval "$(pyenv init -)"
EOF
