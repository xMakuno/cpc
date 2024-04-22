if __name__ == "__main__":
    n  = int(input())
    a = list(map(int, input().split()))
    s1 = sum(a)
    s2 = 0
    ans = 0
    for i in range(n-1,0,-1):
        s1 -= a[i]
        s2 += a[i]
        if s1 == s2:
            ans += 1
    print(ans)