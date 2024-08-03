#!/bin/bash

g++ "./$1" -o "out.out"
if [ "$2" ]
    then
        ./out.out < ./input.txt
else
    ./out.out
fi
