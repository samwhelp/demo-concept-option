
## Reference

### QSettings

* http://doc.qt.io/qt-5/qsettings.html


### liblxqt0-dev

``` sh
$ apt-cache show lxqt-build-tools | grep '^Depends:'
```

```
Depends: binutils, cmake (>= 3.0.2), libqt5xdg-dev (>= 3.1.0), libglib2.0-dev (>= 2.5.0), pkg-config, qttools5-dev, qttools5-dev-tools
```

``` sh
$ apt-cache show lxqt-config | grep '^Depends:'
```

```
Depends: libc6 (>= 2.14), libkf5screen-bin (>= 4:5.6.2~), libkf5screen7 (>= 4:5.6.2), liblxqt0 (>= 0.12.0), libqt5core5a (>= 5.9.0~beta), libqt5gui5 (>= 5.7.0), libqt5svg5 (>= 5.6.0~beta), libqt5widgets5 (>= 5.6.0~beta), libqt5x11extras5 (>= 5.6.0), libqt5xdg3 (>= 1.0.0), libqt5xml5 (>= 5.0.2), libstdc++6 (>= 4.1.1), libx11-6, libxcb-randr0 (>= 1.3), libxcb1, libxcursor1 (>> 1.1.2), libxfixes3, zlib1g (>= 1:1.1.4)
```

``` sh
$ apt-cache showsrc liblxqt0 | grep '^Binary:'
```

```
Binary: liblxqt0, liblxqt0-dev
```

### pkg-config

* http://qt.shoutwiki.com/wiki/Using_pkg-config_with_qmake

``` sh
$ sudo apt-get install liblxqt0-dev
```

``` sh
$ dpkg -L liblxqt0-dev | grep pc
```

```
/usr/lib/x86_64-linux-gnu/pkgconfig/lxqt.pc
```

``` sh
$ pkg-config --list-all | grep lxqt
```

```
lxqt                           lxqt - Shared library for LXQt applications
```

``` sh
$ pkg-config --cflags --libs lxqt
```

```
-I/usr/include/lxqt -I/usr/include/qt5xdg -I/usr/include/qt5xdgiconloader -I/usr/include/x86_64-linux-gnu/qt5/QtSvg -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtXml -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtDBus -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtX11Extras -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/x86_64-linux-gnu/qt5 -llxqt -lQt5Xdg -lQt5XdgIconLoader -lQt5Svg -lQt5Widgets -lQt5Xml -lQt5DBus -lQt5X11Extras -lQt5Gui -lQt5Core
```

## demo.pro

* http://qt.shoutwiki.com/wiki/Using_pkg-config_with_qmake

```
unix {
	CONFIG += link_pkgconfig
	PKGCONFIG += lxqt
}
```


## Build

### Prepare

``` sh
$ sudo apt-get install liblxqt0-dev
```

### Way 1

``` sh
$ ./build.sh
```

### Way 2

First

``` sh
$ qmake
```

Then

``` sh
$ make
```

## Test

### test 1

``` sh
$ cp config.true.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 2

``` sh
$ cp config.false.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 3

``` sh
$ rm ~/.config/lxqt/lxqt-archiver.conf -f
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 4

``` sh
$ cp config.nokey.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 5

``` sh
$ cp config.notboolean.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 6

``` sh
$ cp config.number.0.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 7

``` sh
$ cp config.number.1.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 8

``` sh
$ cp config.number.2.ini ~/.config/lxqt/lxqt-archiver.conf
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```
