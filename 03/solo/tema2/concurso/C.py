def TLE():
    n = int(input())
    arr = []
    memo = {} # len:[nums]
    for _ in range(n):
        temp = input()
        size = len(temp)
        if size not in memo:
            memo.update({size:[int(temp)]})
        else:
            memo[size].append(int(temp))
    for i in sorted(memo.keys()):
        for j in memo[i]:
            print(j)

def ac():
    n = int(input())
    arr = []
    for i in range(n):
        arr.append(input())
    arr.sort(key=lambda x: (len(x),x))
    for i in arr:
        print(i)

if __name__ == "__main__":
    # TLE()
    ac()