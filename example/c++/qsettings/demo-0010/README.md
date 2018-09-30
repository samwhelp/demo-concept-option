
## Reference

### QSettings

* http://doc.qt.io/qt-5/qsettings.html
* http://doc.qt.io/qt-5/qsettings.html#Format-enum
* http://doc.qt.io/qt-5/qsettings.html#value
* http://doc.qt.io/qt-5/qsettings.html#setValue


### qt5-default

* http://zetcode.com/gui/qt5/introduction/

``` sh
$ apt-cache show qt5-default | grep '^Depends:'
```

```
Depends: qtbase5-dev, qtchooser (>= 55-gc9562a1-1~)
```

``` sh
$ apt-cache show qtbase5-dev | grep '^Depends:'
```

### QtCore

``` sh
$ apt-file search QtCore
```

``` sh
$ dpkg -S QtCore
```

### pkg-config

* http://qt.shoutwiki.com/wiki/Using_pkg-config_with_qmake

``` sh
$ dpkg -L qtbase5-dev | grep pc
```

```
/usr/include/x86_64-linux-gnu/qt5/QtGui/qpixmapcache.h
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Concurrent.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Core.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5DBus.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Gui.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Network.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5OpenGLExtensions.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5PrintSupport.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Sql.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Test.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Widgets.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/Qt5Xml.pc
```

``` sh
pkg-config --list-all | grep Qt5
```

```
Qt5DBus                        Qt5 DBus - Qt DBus module
Qt5XdgIconLoader               Qt5XdgIconLoader - Qt5XdgIconLader, a Qt5 XDG Icon Loader
Qt5Sql                         Qt5 Sql - Qt Sql module
Qt5Script                      Qt5 Script - Qt Script module
Qt5PrintSupport                Qt5 PrintSupport - Qt PrintSupport module
Qt5Test                        Qt5 Test - Qt Unit Testing Library
Qt5ScriptTools                 Qt5 ScriptTools - Qt ScriptTools module
Qt5Core                        Qt5 Core - Qt Core module
Qt5Svg                         Qt5 Svg - Qt Svg module
Qt5UiTools                     Qt5 UiTools - Qt UiTools module
Qt5Xml                         Qt5 Xml - Qt Xml module
Qt5Network                     Qt5 Network - Qt Network module
Qt5Help                        Qt5 Help - Qt Help module
Qt5Gui                         Qt5 Gui - Qt Gui module
Qt5X11Extras                   Qt5 X11Extras - Qt X11Extras module
Qt5OpenGL                      Qt5 OpenGL - Qt OpenGL module
Qt5Designer                    Qt5 Designer - Qt Designer module
Qt5OpenGLExtensions            Qt5 OpenGLExtensions - Qt OpenGLExtensions module
Qt5Widgets                     Qt5 Widgets - Qt Widgets module
Qt5Concurrent                  Qt5 Concurrent - Qt Concurrent module
Qt5Xdg                         Qt5Xdg - Qt5Xdg, a Qt5 implementation of XDG standards
```

``` sh
$ pkg-config --cflags --libs Qt5Core
```

```
-I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/x86_64-linux-gnu/qt5 -lQt5Core
```




## Notice

* http://doc.qt.io/qt-5/qsettings.html#Format-enum

```
The INI file format has severe restrictions on the syntax of a key. Qt works around this by using % as an escape character in keys. In addition, if you save a top-level setting (a key with no slashes in it, e.g., "someKey"), it will appear in the INI file's "General" section. To avoid overwriting other keys, if you save something using a key such as "General/someKey", the key will be located in the "%General" section, not in the "General" section.
```

## Build

### Prepare

``` sh
$ sudo apt-get install qt5-default
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
$ cp config.true.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 2

``` sh
$ cp config.false.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 3

``` sh
$ rm config.ini -f
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 4

``` sh
$ cp config.nokey.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 5

``` sh
$ cp config.notboolean.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 6

``` sh
$ cp config.number.0.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 7

``` sh
$ cp config.number.1.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 8

``` sh
$ cp config.number.2.ini config.ini
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```
