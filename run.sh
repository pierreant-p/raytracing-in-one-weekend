#!/bin/bash

rm -f image.ppm
clang++ main.cpp
./a.out > image.ppm
open image.ppm
