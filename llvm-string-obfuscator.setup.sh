# https://github.com/tsarpaul/llvm-string-obfuscator
sudo apt -y install llvm
git clone https://github.com/tsarpaul/llvm-string-obfuscator.git
cd llvm-string-obfuscator
mkdir build
cd build
cmake ..
make

