#!/bin/bash
#copyright 2018 Zhuyu Li zhuyuli@bu.edu
#script shell file


g++ fourargs.cpp -o fourargs
python fourargs.py one two 3 four five six
python fourargs.py one two 3
fourargs one two 3 four five six
fourargs one two 3