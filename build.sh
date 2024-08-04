#!/bin/sh
swiftc -parse-as-library -emit-library CGraphics.swift -o ./lib/libCGraphics.so
gcc -o main *.c -L`pwd`/lib/ -lCGraphics