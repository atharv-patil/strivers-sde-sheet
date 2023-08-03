# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseKGroup(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        
        if not head:
            return None
        if k==1:
            return head
        
        h1 = h2 = head
        n = 0
        while h2:
            h2 = h2.next
            n += 1

        l = []
        ll = []
        j = 0
        while h1:
            j += 1
            i = 0
            last = None
            
            while i<k and h1:
                if i==0:
                    l.append(h1)
                i += 1
                temp = h1.next
                h1.next = last
                h1,last = temp,h1
    
            if last:
                ll.append(last)
            
            if j == n//k:
                ll.append(h1)
                break
                
        for i in range(len(l)):
            l[i].next = ll[i+1]

            
        return ll[0]
       
            
