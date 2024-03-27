def bs(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0
 
    while low <= high:
        mid = (high + low) // 2
        if arr[mid] < x:
            low = mid + 1
        elif arr[mid] > x:
            high = mid - 1
        else:
            return x
    return -1


if __name__ == "__main__":
    n = input()
    s = set(map(int, input().split()))
    m = input()
    t = list(map(int, input().split()))
    t.sort()
    ans = 0
    for i in s:
        if(bs(t, i) != -1):
            ans += 1
    print(ans)