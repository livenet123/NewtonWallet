

[![Build status](https://ci.appveyor.com/api/projects/status/crhphitiaifl3rym/branch/master?svg=true)](https://ci.appveyor.com/project/livenet123/newtonwallet/branch/master)

# Newton GUI Wallet


## Building on Mac OSX

```
brew install boost
brew install qt5
brew link --force qt5
ln -s /usr/local/Cellar/qt/5.11.0/mkspecs /usr/local/mkspecs
ln -s /usr/local/Cellar/qt/5.11.0/plugins /usr/local/plugins
git clone https://github.com/livenet123/Newton.git
git clone https://github.com/livenet123/NewtonWallet.git
cd NewtonWallet
ln -s ../Newton/ cryptonote
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make
```

## Building on Ubuntu

```
sudo apt-get install build-essential libboost-all-dev git cmake qtbase5-dev
git clone https://github.com/livenet123/Newton.git
git clone https://github.com/livenet123/NewtonWallet.git
cd NewtonWallet
ln -s ../Newton/ cryptonote
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make
```
[installation Guide](https://medium.com/@mailhandler_66795/installing-newton-3-0-0-wallet-on-ubuntu-2acf7cf0ca3c) 
thank's to @[Shilli Vanilli](https://medium.com/@mailhandler_66795)
## Building on Windows

You need Microsoft Visual Studio Community 2017. [Download](https://www.visualstudio.com/vs/) and install it selecting `C++`, `git`, `cmake integration` packages.
Run `Visual Studio x64 command prompt` from start menu.
Get binary package [Boost](https://boost.org) and install it or you can build boost from source

```
git clone https://github.com/livenet123/NewtonWallet.git
cd NewtonWallet
git clone https://github.com/livenet123/Newton.git cryptonote
md build && cd build
cmake -G "Visual Studio 15 2017 Win64" .. -DCMAKE_BUILD_TYPE=Release
MSBuild NewtonWallet.sln /p:Configuration=Release /m
```
OR you can open NewtonWallet Solution in Visual Studio and build

