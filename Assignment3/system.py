#!/usr/bin/env python3
# -*- coding: utf-8 -*-

# copyright 2018 Zhuyu Li zhuyuli@bu.edu
# python file: simulate a DT LTI system

import numpy as np

x = np.array(input().split(' '))
h = np.array(input().split(' '))
total_length = len(x) + len(h) - 1

y = np.zeros(total_length)

for n in range(len(x)):
	for i in range(len(h)):
		y[n+i] = y[n+i] + float(x[n]) * float(h[i])
		#y[0]=total_length
            
    
for x in y:
	print(x)
