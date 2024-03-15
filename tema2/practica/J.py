if __name__ == "__main__":
    n, m = [int(x) for x in input().split(" ")]
    a = [int(x) for x in input().split(" ")]
    b = [int(x) for x in input().split(" ")]
    a.sort()  
    ans = []
    for j in b:
        for i in range(n-1, -1,-1):
            if a[i] <= j:
                ans.append(i+1)
                break
            if i == 0 and a[i] >= j:
                ans.append(0)
    print(*ans)