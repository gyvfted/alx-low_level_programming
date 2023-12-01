#!/bin/bash
wget -p .. https://githubusercontent.com/gyvfted/alx-low_level_programming/master/0x18-dynamic_libraries/libmake_me_win.so
export LD_PRELOAD="$PWD/../libmake_me_win.so
