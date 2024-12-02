APP_ABI := armeabi-v7a
APP_ABI += arm64-v8a
APP_ABI += x86 x86_64
APP_PLATFORM := android-21
APP_ALLOW_MISSING_DEPS=true
APP_STL := c++_static
APP_CPPFLAGS := -Wno-error=format-security -std=c++14 -fpermissive
APP_OPTIM := release
