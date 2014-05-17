#!/bin/bash

#C_INCLUDE_PATH="/home/hiro/code/c_learning"
#export C_INCLUDE_PATH


echo "processing $1"

filename=$1
#include math lib
gcc $filename.c -o $filename -lm
#gcc  $filename.c -o $filename
