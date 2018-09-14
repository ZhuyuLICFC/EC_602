#copyright 2018 Zhuyu Li zhuyuli@bu.edu
"""
A python program that outputs the first four arguments to
stdout and any additional arguments to stderr
"""

import sys

arg_length = len(sys.argv)

if arg_length > 5:
    for num in range(1, 5):
        sys.stdout.write(sys.argv[num] + '\n')

    for num in range(5, arg_length):
        sys.stderr.write(sys.argv[num] + '\n')
        
        
else:
    for num in range(1, arg_length):
        sys.stdout.write(sys.argv[num] + '\n')
        
              
     
    



