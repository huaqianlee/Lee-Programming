#!/bin/python3

import math
import os
import random
import re
import sys


def weird_or_not(n):
    if n % 2 == 0:
        if n in range(2,6):
            print("Not Weird")
        elif n in range (6, 21):
            print ("Weird")
        elif n > 20:
            print("Not Weird")
    else:
        print("Weird")


if __name__ == '__main__':
    n = int(input().strip())
    weird_or_not(n)

    # print(("Not " if n%2==0 and (n<=4 or n>20) else "") + "Weird")
    # print ("Not Weird" if not n%2 and (n in range(2,6) or n>20) else "Weird")

#    check = {True: "Not Weird", False: "Weird"}
#
#    print(check[
#            n%2==0 and (
#                n in range(2,6) or
#                n > 20)
#        ])
