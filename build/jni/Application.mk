APP_ABI := armeabi-v7a arm64-v8a
#APP_ABI += x86 x86_64
APP_PLATFORM := android-26
APP_ALLOW_MISSING_DEPS=true
APP_STL := c++_static
APP_CPPFLAGS := -Wno-error=format-security -std=c++14 -fpermissive
APP_OPTIM := release
