def nextPermutation(nums, n):
    i = len(nums)-1
    while i > 0 and nums[i-1] >= nums[i]:
        i -= 1
    if i:
        j = len(nums)-1
        while nums[j] <= nums[i-1]:
            j = j-1
        nums[i-1], nums[j] = nums[j], nums[i-1]
        nums[i:] = nums[i:][::-1]
    else:
        nums = nums[::-1]

    return nums
