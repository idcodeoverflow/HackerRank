#!/bin/python

from __future__ import print_function

import os
import sys

#
# Complete the birthdayCakeCandles function below.
#
def birthdayCakeCandles(n, ar):
    max = 0
    count = {}
    for i in ar:
        try:
            count[i] += 1
            if i > max:
                max = i
        except:
            count[i] = 1
    return count[max]
if __name__ == '__main__':
    f = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(raw_input())

    ar = map(int, raw_input().rstrip().split())

    result = birthdayCakeCandles(n, ar)

    f.write(str(result) + '\n')

    f.close()
