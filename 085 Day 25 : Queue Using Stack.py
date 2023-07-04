from sys import stdin, setrecursionlimit
setrecursionlimit(10**7)

class Queue:

    def __init__(self):
        self.l = []

    def enQueue(self, val):
        self.l.append(val)

    def deQueue(self):
        if not self.l:
            return -1
        ll = []
        ans = -1
        while self.l:
            if len(self.l)==1:
                ans = self.l.pop()
            else:
                ll.append(self.l.pop())
        while ll:
            self.l.append(ll.pop())
        return ans

    def peek(self):
        if not self.l:
            return -1
        ll = []
        ans = -1
        while self.l:
            if len(self.l)==1:
                ans = self.l.pop()
                ll.append(ans)
            else:
                ll.append(self.l.pop())
        while ll:
            self.l.append(ll.pop())
        return ans

    def isEmpty(self):
        if len(self.l)==0:
            return "true"
        else:
            return "false"

# Taking input.
def takeInput():
    n = int(input())

    obstacles = list(map(int, input().strip().split(" ")))

    return obstacles, n

# Main.
q = Queue()
queries = int(input())
while queries:
    values = []
    values = input().split(" ")
    values[0] = int(values[0])
    if values[0] == 1:
        values[1] = int(values[1])
        q.enQueue(values[1])
    elif values[0] == 2:
        print(q.deQueue())
    elif values[0] == 3:
        print(q.peek())
    elif values[0] == 4:
        print(str(q.isEmpty()).lower())
    queries = queries - 1
