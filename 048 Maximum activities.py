def maximumActivities(start, end):
    meet = []
    for i in range(len(start)):
        meet.append([end[i],start[i],i+1])
    meet.sort()
    
    endtime = meet[0][0]
    count = 1
    for i in range(1,len(start)):
        if meet[i][1] >= endtime:
            endtime = meet[i][0]
            count+=1
    return count
