def writeAsYouSpeak(n):
    def f(cnt,s):
        if cnt==n:
            return s
        count = 1
        char = s[0]
        
        ss = ""
        
        for i in range(1,len(s)):
            if s[i]==char:
                count+=1
            else:
                ss+=str(count)+char
                char = s[i]
                count = 1
                
        ss+=str(count)+char
        return f(cnt+1,ss)
    return f(1,"1")
            
