#!/bin/sh
swiftc -parse-as-library -emit-library ./lib/CGraphics.swift -o ./lib/libCGraphics.so
gcc -o example example.c -L./lib/ -lCGraphics