def singleNonDuplicate(arr):
    
    i = 0
    j = len(arr)-1

    while i<=j:

        mid = i+(j-i)//2

        if mid%2==0:
            if mid+1<len(arr) and arr[mid+1]==arr[mid]:
                i = mid+1
            else:
                j = mid-1
        else:
            if mid-1>=0 and  arr[mid-1]==arr[mid]:
                i = mid+1
            else:
                j = mid-1
                
    return arr[i]
                
