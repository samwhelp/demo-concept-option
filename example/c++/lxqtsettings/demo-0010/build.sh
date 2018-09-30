#!/usr/bin/env bash

g++ -fPIC -Wall -o demo main.cpp $(pkg-config --cflags --libs lxqt)

# https://developer.gnome.org/glib/stable/glib-compiling.html
