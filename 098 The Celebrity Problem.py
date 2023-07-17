from os import *
from sys import *
from collections import *
from math import *

'''
    This is signature of helper function 'knows'.
    You should not implement it, or speculate about its implementation.

    def knows(int A, int B); 
    Function 'knows(A, B)' will returns "true" if the person having
    id 'A' knows the person having id 'B' in the party, "false" otherwise.
'''

def findCelebrity(n, knows):

    s = []
    for i in range(n):
        s.append(i)

    while (len(s) > 1):
 
        A = s.pop()
        B = s.pop()
 
        if (knows(A, B)):
            s.append(B)
        else:
            s.append(A)

    if(len(s) == 0):
        return -1
 
    C = s.pop()
 
    if (knows(C, B)):
        C = B
 
    if (knows(C, A)):
        C = A

    for i in range(n):

        if ((i != C) and
            (knows(C, i) or
                not(knows(i, C)))):
            return -1
 
    return C

