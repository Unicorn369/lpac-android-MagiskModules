## lpac-android-MagiskModules
在Android系统中使用[lpac](https://github.com/estkme-group/lpac)命令行工具

可在不支持OMAPI或LPA软件不兼容，以及没有读卡器的情况下，在拥有ROOT权限的Android系统中，管理操作eSIM卡。

经测试在`Android 8~13`均可正常运行，但受其他因素影响，如：CPU、ROM、Modem等，可能导致无法正常食用

### 如何使用？
在Magisk中刷入模块 ->[点击这里下载](https://github.com/Unicorn369/lpac-android-MagiskModules/releases)<-

刷入成功并重启手机后，在终端模拟器中执行`su -c lpac h`或`su && lpac a`即可食用

终端模拟器如`MT管理器`自带，或下载`Termux`

————————————————————

简易菜单因测试时间过少，可能出现纰漏，如有问题请反馈

因机型受限，不同的Android版本可能`PATH`目录也不同，如果在终端模拟器中执行`lpac`提示没有该命令，或者非可执行文件，请反馈

在v1.1.0版本中，已加入支持使用智能卡读卡器(PC/SC)，经反馈部分用户第一次启动可能无法识别，但是重插后就能正常启动。如果还是出现无法识别请反馈

### 如何编译LPAC？
请参考这里：https://github.com/Unicorn369/lpac-android-MagiskModules/tree/sources

### 其他说明
待定...
