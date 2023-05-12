#!/usr/bin/env bash

cd build
cmake ./../
make
./main

# echo `cat main`
# echo $(ls $(pwd))