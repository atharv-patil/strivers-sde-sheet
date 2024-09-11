class Node:
    def __init__(self,val):
        self.val = val
        self.l = [None,None]

class Trie:

    def __init__(self):
        self.start = Node(-1)
    
    def add(self,num):
        root = self.start
        for i in range(31,-1,-1):
            if num & 1<<i:
                if not root.l[1]:
                    root.l[1] = Node(1)
                root = root.l[1]
            else:
                if not root.l[0]:
                    root.l[0] = Node(0)
                root = root.l[0]
    
    def query(self,num):
        ans = 0
        root = self.start
        for i in range(31,-1,-1):
            if num & 1<<i:
                if root.l[0]:
                    root = root.l[0]
                    ans += 1<<i
                    continue
                if root.l[1]:
                    root = root.l[1]
                    continue
            else:
                if root.l[1]:
                    ans += 1<<i
                    root = root.l[1]
                    continue
                if root.l[0]:
                    root = root.l[0]
                    continue
            return -1
        return ans

    
class Solution:
    def maximizeXor(self, nums: List[int], queries: List[List[int]]) -> List[int]:
        print(nums)
        n = len(nums)
        m = len(queries)

        trie = Trie()
        l = []
        for i in range(m):
            l.append((queries[i][1],queries[i][0],i))
        l.sort()
        nums.sort()

        ans = [-1]*m
        
        i = 0
        j = 0
        while j<m:

            while i<n and nums[i] <= l[j][0]:
                trie.add(nums[i])
                i += 1
            ans[l[j][2]] = trie.query(l[j][1])
            j += 1

        return ans

            
