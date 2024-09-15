def searchInsert(nums, target):
    hi = len(nums) - 1
    lo = 0
    while lo < hi:
        mid = (lo + hi + 1)//2
        # print(f'hi: {hi} lo: {lo} mid: {mid}')
        if nums[mid] <= target: lo = mid
        else: hi = mid - 1
    return lo

if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()  
    ans = []
    for j in b:
        temp = searchInsert(a, j)
        if temp != 0: temp+=1
        else:
            if a[temp] > j: temp = 0
            else: temp =1
        ans.append(temp)
    print(*ans)