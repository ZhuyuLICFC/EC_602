#!/usr/bin/env python
# -*- coding: utf-8 -*-

# copyright 2018 Zhuyu Li zhuyuli@bu.edu
# python file: print a table for the capability of integers using 1 to 8 bytes of storage


Table = "{:<6} {:<22} {:<22} {:<22}"

print(Table.format('Bytes','Largest Unsigned Int','Minimum Signed Int','Maximum Signed Int'))

#calculate capability for each number of byte(s)
for byte_num in range(1,9):
    largest_unsinged_int = 2**(8*(byte_num))-1
    minimum_signed_int = -2**(8*(byte_num)-1)
    maxinum_signed_int = 2**(8*(byte_num)-1)-1
    print(Table.format(byte_num, largest_unsinged_int, minimum_signed_int, maxinum_signed_int))