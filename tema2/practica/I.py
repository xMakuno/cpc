def getKey(t):
    return t[0]

def solve():
    n = int(input())
    memo = []
    stack = []
    for i in range(n):
        x, y = map(int, input().split())
        if x > y:
            memo.append([y, 0, x])
            memo.append([x, 1, y])
        else:
            memo.append([y, 1, x])
            memo.append([x, 0, y])
    memo.sort(key=getKey)
    #print(memo)
    for i in range(2*n):
        # print(f'Connection:  {memo[i]}')
        if memo[i][1] == 0:
            stack.append(memo[i][0])
        else:
            # print(stack)
            if(stack[-1] == memo[i][2]):
                # print(f'Stack peek: {stack[-1]}')
                stack.pop()
            else:
                return "Yes"
    return "No"

if __name__ == "__main__":
    print(solve())