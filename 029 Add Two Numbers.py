class Node:
    def __init__(self, data=0, next=None):
        self.data = data
        self.next = next


# Don't change the code above.


def addTwoNumbers(l1: Node, l2: Node) -> Node:
    main = Node(0)
    a = main
    s = ''
    while l1:
        s += str(l1.data)
        l1 = l1.next
    s = s[::-1]
    
    ss = ''
    while l2:
        ss+=str(l2.data)
        l2 = l2.next
    ss = ss[::-1]
    
    sss = list(str(int(s)+int(ss)))[::-1]
    n = len(sss)
    i = 0
    
    while i<n:
        a.next = Node(sss[i])
        a = a.next
        i+=1
    return main.next
