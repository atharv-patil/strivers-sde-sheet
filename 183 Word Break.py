from os import *
from sys import *
from collections import *
from math import *

def wordBreak(word, n, s):
        
    d = defaultdict(int)
    
    def f(s):
        if s in d:
            return d[s]
        if s=="":
            return 1
        else:
            k = 0
            for i in word:
                l = len(i)
                if l<=len(s) and s[:l]==i:
                    k|=f(s[l:])
            d[s] = k
            return k
    return f(s)
