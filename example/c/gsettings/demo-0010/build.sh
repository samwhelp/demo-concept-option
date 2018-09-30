#!/usr/bin/env bash

cc -o demo main.c $(pkg-config --cflags --libs glib-2.0 gio-2.0)

# https://developer.gnome.org/glib/stable/glib-compiling.html
