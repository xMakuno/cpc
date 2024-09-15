def TLE():
    n, k = [int(a) for a in input().split(" ")]
    array = [int(a) for a  in input().split(" ")]
    memo = {}
    for i in array:
        memo[i] = memo[i] + 1 if i in memo else 1
    array.sort()
    mid = array[n//2]
    while k:
        # print(f'Array: {array} Idx: {n//2} Mid: {mid}')
        # print(f'Memo: {memo} Memo at mid: {memo[mid]}')
        if memo[mid] <= k:
            k -= memo[mid]
            memo[mid + 1] = memo[mid] if mid + 1 not in memo else memo[mid+1] + memo[mid]
            mid += 1
        elif memo[mid] > k and len(memo) == 1:
            mid += 1
            break
        else:
            break
    print(mid)

def attempt5():
    n, k = [int(a) for a in input().split(" ")]
    array = [int(a) for a  in input().split(" ")]
    array = array[n//2:]
    print(array)


if __name__ == "__main__":
    #TLE()
    attempt5()
    # print(f'time: {start-end:0.4f}')