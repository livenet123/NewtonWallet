
Dependencies: boost >= 1.58, CMake >= 2.8.6, GCC >=4.7.3, Qt >=5.0

**1. Clone wallet sources**

```
git clone https://github.com/livenet123/NewtonWallet.git NewtonWallet
```

**2. clone Newton coin repo

```
git clone https://github.com/livenet123/Newton.git Newton
```
replace the 'Newton' folder in NewtonWallet with Newton clone folder.

**3. Build**

#### Windows build

On windows, you will have to first seperately build rocksdb and Newton projects with -DSTATIC=0 option. Now pick the .lib files from the built project into the /libs folder in the root or source directory. Then you can proceed with cmake of GUI wallet and build using the following commands.

```
mkdir build && cd build && cmake -G "Visual Studio 15 Win64" .. && make
```

On windows, you may find it helpful to explicitly include Boost and Qt library paths:

```
cmake -G "Visual Studio 15 Win64" -DCMAKE_PREFIX_PATH="C:\Qt2\5.9.1\msvc2015" -DBOOST_ROOT="C:\boost_1_64_0_built" -DBOOST_INCLUDEDIR="C:/boost_1_64_0_built/lib32-msvc-14.1" -DBOOST_LIBRARYDIR="C:\boost_1_64_0_built\libs"
 ```
#### *nix build
```
mkdir build && cd build && cmake -DSTATIC=1 .. && make
```

Do the following:
    a. Delete the contents of the 'libs' folder within the GUI wallet root directory.
    b. In the NewtonWallet/Newton/External folder create a 'Build' folder, execute cmake with DSTATIC option 0. This step is important.
    c. Build in MSVCS 2017/Boost 1.66, then copy the resulting rocksdblib.lib file from the 'Build' folder into the 'libs' folder within the GUI wallet root directory.
    d. Next, Build the 'Newton' using cmake with DSTATIC option 0. Again, this step is important. Note: The build in MSVC 2017 may fail but don't worry, just copy the resulting '.lib' files from your coin's build folder into the 'libs' folder within the GUI wallet root directory.
    c. Next get into the GUI wallet root directory, ie 'NewtonWallet' and do cmake with DSTATIC option 1, and build your wallet. Hopefully you will see the 'NewtonWallet.exe' file your build folder.
    Now go ahead and try out your wallet.

So in short, this is a tricky way to get the code working on Windows. But credit is due to @jasin and IntrinsicCoin Developers.

But its way too easy to get your coin a GUI wallet for Ubuntu. Fork the ChavezCoinWallet code, put your coin's code in the 'cryptonote' folder and execute cmake/make. Voila, your wallet is ready. Its pretty straightforward. Hope this helps in your first trial and error.

