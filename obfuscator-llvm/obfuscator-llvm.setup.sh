# install dependency
sudo apt-get -y install cmake

# https://github.com/MaxXor/obfuscator-llvm
git clone https://github.com/MaxXor/obfuscator-llvm.git
cd obfuscator-llvm

# set -DENDIAN_LITTLE force
sed -i 's|COMPILE_FLAGS "-fno-rtti -fPIC"|COMPILE_FLAGS "-fno-rtti -fPIC -DENDIAN_LITTLE"|' obfuscator-llvm/CMakeLists.txt

./build.sh
