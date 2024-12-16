## 编译说明

使用 ndk25+
```
git clone https://github.com/Unicorn369/lpac-android-MagiskModules.git -b sources --recursive
cd lpac-android-MagiskModules
patch -p1 < fix.patch
cd build
cp -f version.h ../lpac/src/
ndk-build -j4
```

### 编译选项
启用`PCSC`

注：需修改`libpcsclite.mk`中的`USE_IPCDIR`

如果使用Termux的PCSCD则需要修改为`/data/data/com.termux/files/usr/var/run`
```
ndk-build LPAC_WITH_APDU_PCSC=ON
```

禁用`AT`
```
ndk-build LPAC_WITH_APDU_AT=OFF
```
