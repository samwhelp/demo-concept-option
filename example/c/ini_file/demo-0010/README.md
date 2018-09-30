
## Reference


### Compile

* https://developer.gnome.org/glib/stable/glib-compiling.html


### gboolean, TRUE, False

* https://developer.gnome.org/glib/stable/glib-Basic-Types.html#gboolean


### g_key_file_get_boolean

* https://developer.gnome.org/glib/stable/glib-Key-value-file-parser.html#g-key-file-get-boolean


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
force_use_unar: no
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
force_use_unar: no
```
