def getSr(l):
    return l[0]

if __name__ == "__main__":
    n = int(input())
    memo = [] # []
    for i in range(n):
        a, b = [int(x) for x in input().split(" ")]
        sr = a / (a +b)
        x = next((i for i in range(len(memo)) if memo[i][0] == sr), -1)
        if x == -1:
            temp = [sr, i+1]
            memo.append(temp)
        else:
            memo[x].append(i+1)
    memo.sort(key=getSr, reverse=True)
    ans = []
    for i in memo:
        ans.extend(i[1:])
    print(*ans)