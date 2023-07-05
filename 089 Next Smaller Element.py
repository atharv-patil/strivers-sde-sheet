def nextSmallerElement(arr,n):
    s = [0]
    ans = [-1]*n
    
    for i in range(1,n):
        if(arr[i]>=arr[s[-1]]):
            s.append(i)
        else:
            while(len(s)!=0 and arr[s[-1]]>arr[i]):
                ans[s[-1]] = arr[i]
                s.pop()
            s.append(i)
    return ans
