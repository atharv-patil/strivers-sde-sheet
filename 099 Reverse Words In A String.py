def reverseString(str: str) -> str:
    
    l = str.split()[::-1]

    ans = ""
    for i in l:
        if i!="":
            ans+=i+" "
    return ans
