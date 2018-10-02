#!/bin/bash
#Who even uses makefiles anyway? :D
objOut="./object/"
exec="./bin/out"
libraries="-lncurses -lSDL"
libs=""
flags="-Wall"
include="-I./include/ -I/usr/include -I/usr/local/include -I./**"
CPPVersion="c++17"

#Find uncompiled files (.cpp .c)
raws=$(find ./src/ -name "*.cpp"; find ./src/ -name "*.c")
for i in $raws
    do echo $i
done

g++ $flags -o $exec $raws $libs $libraries $include -std=$CPPVersion
