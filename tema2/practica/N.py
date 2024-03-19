def wa1():
    # 21 out of 27 cases
    n, x = [int(a) for a in input().split(" ")]
    memo = { -1:[]}
    ans = []
    for idx, i in enumerate(input().split()):
        i = int(i)
        if i not in memo:
            memo[i] = [idx+1]
        else:
            memo[i].append(idx+1)
        if x // 2 == i and x & 1 == 0:
            if len(memo[i]) > 1:
                # print answer
                ans = memo[i]
                break
        else:
            if x-i in memo:
                ans.append(memo[i][0])
                ans.append(memo[x-i][0])
                break
    if len(ans) > 0:
        print(*ans)
    else:
        print("IMPOSSIBLE")

if __name__ == "__main__":
    wa1()