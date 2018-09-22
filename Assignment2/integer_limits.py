#!/usr/bin/env python3
# -*- coding: utf-8 -*-

#copyright 2018 Zhuyu Li zhuyuli@bu.edu
#python file: calculate capability for bytes from 1-8

Table = "{:<6} {:<22} {:<22} {:<22}"

print(Table.format('Bytes','Largest Unsigned Int','Minimum Signed Int','Maximum Signed Int'))

for i in range(1,9):
    
    byte_num = i
    largest_unsigned_int= 2**(8*i)-1
    minimum_signed_int= -2**(8*i-1)
    maximum_signed_int= 2**(8*i-1)-1
    print(Table.format(byte_num, largest_unsigned_int, minimum_signed_int, maximum_signed_int))


