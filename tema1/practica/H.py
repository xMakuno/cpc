from collections import deque 
from copy import copy
def tle():
    n, q = map(int, input().split())
    nums = deque(map(int, input().split()))
    if(q == 0):
        return
    # print(nums)
    for i in range(q):
        t = int(input())
        temp = copy(nums)
        while t:
            t-=1
            a = temp.popleft()
            b = temp.popleft()
            
            if a > b:
                temp.appendleft(a)
                temp.append(b)
            else:
                temp.appendleft(b)
                temp.append(a)
            # print(nums)
        print(f'{a} {b}')
    
def solve():
    n, q = map(int, input().split())
    nums = deque(map(int, input().split()))

if __name__ == "__main__":
    solve()