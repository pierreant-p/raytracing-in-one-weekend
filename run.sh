#!/bin/bash -e

rm -f image.ppm
clang++ main.cpp
./a.out > image.ppm
open image.ppm
