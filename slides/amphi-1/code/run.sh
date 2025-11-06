#!/bin/sh

for i in *.cpp; do
    [ -f "$i" ] || break
    g++ $i -o $i.o
    rm -f $i.res
    ./$i.o >> $i.res
done
