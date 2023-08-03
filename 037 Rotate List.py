# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return head
        n = 0
        h1 = h2 = head
        while h1:
            h1 = h1.next 
            n += 1
        k %= n
        
        if k == 0:
            return head
        
        second = head
        i = 0
        last = None
        while i < n-k:
            i += 1
            last = h2
            h2 = h2.next
            
        if last:
            last.next = None
        
        ans = h2
        
        last = None
        while h2:
            last = h2
            h2 = h2.next
        
        last.next = second
        
        return ans
