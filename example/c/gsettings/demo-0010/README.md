
## Reference


### Compile

* https://developer.gnome.org/glib/stable/glib-compiling.html


### gboolean, TRUE, False

* https://developer.gnome.org/glib/stable/glib-Basic-Types.html#gboolean


### gio/gio.h

``` sh
$ dpkg -S gio/gio.h
```

```
libglib2.0-doc: /usr/share/doc/libglib2.0-doc/gio/gio.html
libglib2.0-dev:amd64: /usr/include/glib-2.0/gio/gio.h
```

``` sh
$ dpkg -L libglib2.0-dev | grep pc | grep gio
```

```
/usr/include/glib-2.0/gio/gtcpconnection.h
/usr/lib/x86_64-linux-gnu/pkgconfig/gio-2.0.pc
/usr/lib/x86_64-linux-gnu/pkgconfig/gio-unix-2.0.pc
```

``` sh
$ pkg-config --cflags --libs gio-2.0
```

```
-pthread -I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -lgio-2.0 -lgobject-2.0 -lglib-2.0
```

## glib.h

``` sh
$ dpkg -S glib.h
```

```
libappstream-glib-dev: /usr/include/libappstream-glib/appstream-glib.h
libjson-glib-dev:amd64: /usr/include/json-glib-1.0/json-glib/json-glib.h
libjpeg-turbo8-dev:amd64: /usr/include/jpeglib.h
linux-headers-4.15.0-33-generic: /usr/src/linux-headers-4.15.0-33-generic/include/config/blk/dev/bsglib.h
linux-headers-4.15.0-34-generic: /usr/src/linux-headers-4.15.0-34-generic/include/config/blk/dev/bsglib.h
libsnapd-glib-dev:amd64: /usr/include/snapd-glib/snapd-glib/snapd-glib.h
libharfbuzz-dev:amd64: /usr/include/harfbuzz/hb-glib.h
libglib2.0-dev:amd64: /usr/include/glib-2.0/glib.h
crda: /usr/include/reglib/reglib.h
libglib2.0-doc: /usr/share/doc/libglib2.0-doc/glib/glib.html
```

``` sh
$ dpkg -L libglib2.0-dev | grep pc | grep glib
```

```
/usr/include/glib-2.0/gio/gtcpconnection.h
/usr/lib/x86_64-linux-gnu/pkgconfig/glib-2.0.pc
```

``` sh
$ pkg-config --cflags --libs glib-2.0
```

```
-I/usr/include/glib-2.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -lglib-2.0
```


### Exit Status

* https://www.gnu.org/software/libc/manual/html_node/Exit-Status.html
* /usr/include/stdlib.h
* man 7posix [stdlib.h](http://manpages.ubuntu.com/manpages/bionic/en/man7/stdlib.h.7posix.html)   # sudo apt-get install manpages-posix-dev


### stdlib.h

``` sh
$ whereis stdlib.h
```

```
stdlib: /usr/include/stdlib.h
```

``` sh
$ dpkg -S stdlib.h
```

```
libboost1.65-dev:amd64: /usr/include/boost/cstdlib.hpp
libc6-dev:amd64: /usr/include/x86_64-linux-gnu/bits/stdlib.h
libfreetype6-dev:amd64: /usr/include/freetype2/freetype/config/ftstdlib.h
libstdc++-7-dev:amd64: /usr/include/c++/7/stdlib.h
libstdc++-7-dev:amd64: /usr/include/c++/7/tr1/stdlib.h
libbsd-dev:amd64: /usr/include/bsd/stdlib.h
manpages-posix-dev: /usr/share/man/man7/stdlib.h.7posix.gz
libc6-dev:amd64: /usr/include/stdlib.h
```

``` sh
$ apt-file search stdlib.h
```


## Build

``` sh
$ ./build.sh
```

## Test

### test 1

``` sh
$ gsettings set org.gnome.FileRoller.General force-use-unar true
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 2

``` sh
$ gsettings set org.gnome.FileRoller.General force-use-unar false
```

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 3

``` sh
$ gsettings reset org.gnome.FileRoller.General force-use-unar
```

``` sh
$ ./demo
```

```
force_use_unar: no
```
