#!/bin/sh

for i in *.cpp; do
    [ -f "$i" ] || break
    g++ $i -fno-optimize-sibling-calls -o $i.o
    rm -f $i.res
    ./$i.o > $i.res 2>&1
done
