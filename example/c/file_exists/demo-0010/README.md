
## Reference

* https://developer.gnome.org/glib/stable/glib-compiling.html
* https://developer.gnome.org/glib/stable/glib-Basic-Types.html#gboolean
* man 3 [fopen](http://manpages.ubuntu.com/manpages/bionic/en/man3/fopen.3.html)
* man 3posix [fopen](http://manpages.ubuntu.com/manpages/bionic/en/man3/fopen.3posix.html)   # sudo apt-get install manpages-posix-dev
* https://www.gnu.org/software/libc/manual/html_node/Opening-Streams.html
* https://developer.gnome.org/glib/stable/glib-File-Utilities.html


## Build

``` sh
$ ./build.sh
```

## Test

### test 1

``` sh
$ ./demo
```

```
force_use_unar: no
```

### test 2

``` sh
$ touch /tmp/force-use-unar
```

``` sh
$ ./demo
```

```
force_use_unar: yes
```

### test 3

``` sh
$ rm /tmp/force-use-unar -f
```

``` sh
$ ./demo
```

```
force_use_unar: no
```
