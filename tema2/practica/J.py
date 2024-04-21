def searchInsert(nums, target):
    hi = len(nums) - 1
    lo = 0
    while lo <= hi:
        mid = lo + (hi - lo)//2
        if nums[mid][0] == target: return mid
        if nums[mid][0] > target: hi = mid - 1
        else: lo = mid + 1
    return lo

if __name__ == "__main__":
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    a = [[x, 1] for x in a]
    memo = {}
    for thing in a:
        if thing not in memo:
            memo.update({thing:1})
        else:
            memo[thing] += 1
    b = list(map(int, input().split()))
    a.sort()  
    ans = []
    for j in b:
        ans.append(searchInsert(a, j))
    print(*ans)