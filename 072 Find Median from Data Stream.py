class MedianFinder:
    def __init__(self):
        self.n = 0
        self.hq1 = []
        self.hq2 = []

    def addNum(self, num: int) -> None:
        self.n += 1
        if not self.hq1:
            heappush(self.hq1,-num)
            return
        x = heappop(self.hq1)
        heappush(self.hq1,x)
        if -x >= num:
            heappush(self.hq1,-num)
            while len(self.hq1)-len(self.hq2) > self.n%2:
                heappush(self.hq2,-heappop(self.hq1))
        else:
            heappush(self.hq2,num)
            while len(self.hq1)-len(self.hq2) < self.n%2:
                heappush(self.hq1,-heappop(self.hq2))

    def findMedian(self) -> float:
        # print(self.hq1,self.hq2)
        if self.n % 2:
            x = heappop(self.hq1)
            heappush(self.hq1,x)
            return -x
        else:
            x = heappop(self.hq1)
            heappush(self.hq1,x)
            y = heappop(self.hq2)
            heappush(self.hq2,y)
            return (y-x)/2
