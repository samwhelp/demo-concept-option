
## Reference

* https://developer.gnome.org/glib/stable/glib-compiling.html
* https://developer.gnome.org/glib/stable/glib-Basic-Types.html#gboolean
* man 3 [getenv](http://manpages.ubuntu.com/manpages/bionic/en/man3/getenv.3.html)
* man 3posix [getenv](http://manpages.ubuntu.com/manpages/bionic/en/man3/getenv.3posix.html)   # sudo apt-get install manpages-posix-dev
* https://www.gnu.org/software/libc/manual/html_node/Environment-Access.html


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
FORCE_USE_UNAR= ./demo
```

```
force_use_unar: yes
```

### test 3

``` sh
FORCE_USE_UNAR=true ./demo
```

```
force_use_unar: yes
```
