def search(arr, target) :
    n = len(arr)
    pivot = arr[-1]

    i = 0
    j = n-1
    while i<=j:
        mid = i+(j-i)//2

        if arr[mid]<=pivot:
            j = mid-1
        else:
            i = mid+1
        # print(i,j)
    
    if (not i):
        i = 0
        j = n-1
        while i<=j:
            mid = i+(j-i)//2

            if arr[mid]==target:
                return mid
            elif arr[mid]>target:
                j = mid-1
            else:
                i = mid+1
        return -1
    else:
        if target>pivot:
            j = i-1
            i = 0
            while i<=j:
                mid = i+(j-i)//2

                if arr[mid]==target:
                    return mid
                elif arr[mid]>target:
                    j = mid-1
                else:
                    i = mid+1
            return -1
        else:
            j = n-1
            while i<=j:
                mid = i+(j-i)//2

                if arr[mid]==target:
                    return mid
                elif arr[mid]>target:
                    j = mid-1
                else:
                    i = mid+1
            return -1

