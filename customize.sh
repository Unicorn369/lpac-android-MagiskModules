# check android
if [ "$ARCH" != "arm64" ]; then
  ui_print "! 不支持设备架构: $ARCH"
  abort "! 仅支持架构 arm64"
else
  ui_print "- 设备架构: $ARCH"
fi

if [ "$API" -lt 26 ]; then
  ui_print "! 不支持SDK: $API"
  abort "! 最低支持SDK 26 (Android 8.0)"
else
  ui_print "- 设备SDK: $API"
fi

ui_print "- 安装完成！"
ui_print "- 重启设备后，在终端模拟器中，执行“lpac h”即可食用"
