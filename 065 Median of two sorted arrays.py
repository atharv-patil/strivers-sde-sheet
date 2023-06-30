from bisect import *
def median(a: int, b: int) -> float:
    x = min(a[0],b[0])
    y = max(a[-1],b[-1])
    
    n = len(a)
    m = len(b)
    
    if (n+m)%2:
        i = x
        j = y
        ans = -1
        while i<=j:
            mid = i+(j-i)//2;
            
            aa = bisect_right(a,mid)
            bb = bisect_right(b,mid)
            if (aa+bb) > (n+m)//2:
                j = mid-1
            else:
                i = mid+1
        return float(i)
    else:
        i = x
        j = y
        ans = -1
        while i<=j:
            mid = i+(j-i)//2;
            
            aa = bisect_right(a,mid)
            bb = bisect_right(b,mid)
            if (aa+bb) > (n+m)//2:
                j = mid-1
            else:
                i = mid+1
        f = i
        
        i = x
        j = y
        ans = -1
        while i<=j:
            mid = i+(j-i)//2;
            
            aa = bisect_right(a,mid)
            bb = bisect_right(b,mid)
            if (aa+bb) > (n+m)//2-1:
                j = mid-1
            else:
                i = mid+1
        return (f+i)/2
