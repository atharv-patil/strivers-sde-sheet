from bisect import *

def getMedian(mat):
    n = len(mat)
    m = len(mat[0])
    if n==1:
        return mat[0][m//2]
    
    i = 1
    j = 10**5

    while i<=j:
        mid = i+(j-i)//2

        cnt = 0
        for ii in mat:
            cnt+=m-bisect_right(ii,mid)
        
        if cnt>n*m//2:
            i = mid+1
        else:
            j = mid-1
    return i
