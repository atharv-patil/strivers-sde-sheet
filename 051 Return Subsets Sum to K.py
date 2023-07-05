from collections import *
def findSubsetsThatSumToK(arr, n, k) :
    
    ans = []
    
    for i in range(2**n):
        sm = 0
        t = []
        for j in range(n):
            if i&(1<<j):
                sm+=arr[j]
                t.append(arr[j])
        if sm==k:
            ans.append(t)
    return ans

            


