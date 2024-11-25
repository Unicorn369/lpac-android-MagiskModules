# check android
if [ "$ARCH" = "arm" ]; then
  ui_print "- 设备架构: $ARCH"
elif [ "$ARCH" = "arm64" ]; then
  ui_print "- 设备架构: $ARCH"
else
  ui_print "! 不支持设备架构: $ARCH"
  abort "! 仅支持架构: arm、 arm64"
fi

if [ "$API" -lt 26 ]; then
  ui_print "! 不支持SDK: $API"
  abort "! 最低支持SDK 26 (Android 8.0)"
else
  ui_print "- 设备SDK: $API"
fi

if [ "$ARCH" = "arm" ]; then
  ui_print "- 正在移动arm架构文件..."
  mv -f "$MODPATH/arm/jq" "$MODPATH/system/xbin"
  mv -f "$MODPATH/arm/lpac-hw" "$MODPATH/system/xbin"
fi

rm -r "$MODPATH/arm"

ui_print "- 安装完成！！！"
ui_print "- 重启设备后，在终端模拟器中，执行“lpac h”即可食用"
