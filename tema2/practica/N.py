def TLE(): # Updated version from RTE to TLE with 25 out of 27 cases
    n, x = map(int, input().split(" "))
    memo = {}
    ans = []
    half = x // 2
    idx = 0
    for i in input().split(" "):
        i = int(i)
        if i not in memo:
            memo.update({i:[idx+1]})
        else:
            memo[i].append(idx+1)
        if half == i and x & 1 == 0:
            if len(memo[i]) > 1:
                ans = memo[i]
                break
        else:
            if x-i in memo:
                ans.append(memo[i][0])
                ans.append(memo[x-i][0])
                break
        idx += 1
    if len(ans) > 0:
        print(*ans)
    else:
        print("IMPOSSIBLE")

if __name__ == "__main__":
    TLE()
    # attemptX()