from sys import stdin
import sys
sys.setrecursionlimit(10**7) 
def editDistance(word1, word2) :
    n,m = len(word1),len(word2)
    l = [[i for i in range(n+1)] for i in range(m+1)]
    
    for i in range(m+1):
        l[i][0] = i
    
    for i in range(m):
        for j in range(n):
            if word1[j]==word2[i]:
                l[i+1][j+1] = l[i][j]
            else:
                l[i+1][j+1] = min(l[i][j],l[i+1][j],l[i][j+1])+1

    return l[-1][-1]
    
#taking inpit using fast I/O
def takeInput() :
    str1=input()
    str2=input()

    return str1, str2


#main
str1, str2  = takeInput()
print(editDistance(str1, str2))
