from os import *
from sys import *
from collections import *
from math import *

def compareVersions(a, b):
    
    aa = a.split(".")
    bb = b.split(".")

    i = j = 0
    while i<len(aa) and j<len(bb):

        if int(aa[i])==int(bb[j]):
            pass

        elif int(aa[i])>int(bb[j]):
            return 1

        else:
            return -1

        i+=1
        j+=1

    while i<len(aa):
        if int(aa[i]):
            return 1
        i+=1
                
    while j<len(bb):
        if int(bb[j]):
            return -1
        j+=1
    return 0
