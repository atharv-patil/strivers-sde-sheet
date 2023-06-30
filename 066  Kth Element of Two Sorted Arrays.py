from bisect import *
def ninjaAndLadoos(a, b, m, n, k):

    i = min(a[0],b[0])
    j = max(a[-1],b[-1])
    while i<=j:
        mid = i+(j-i)//2;
        aa = bisect_right(a,mid)
        bb = bisect_right(b,mid)
        if (aa+bb) >= k:
            j = mid-1
        else:
            i = mid+1
    return i

    
