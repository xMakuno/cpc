def calculatePopSum(balls, stack, sum):
    # print(f'balls: {balls} stack: {stack} sum: {sum}')
    if stack[-1][0] > balls:
        sum = sum + stack[-1][1] * balls # calculate sum
        stack[-1][0] = stack[-1][0] - balls
        # print(f'balls: {balls} stack: {stack} sum: {sum}')
        print(sum)
    elif stack[-1][0] < balls:
        sum = sum + stack[-1][1] * stack[-1][0]
        balls = balls - stack[-1][0]
        stack.pop(-1)
        calculatePopSum(balls, stack, sum)
    else:
        sum = sum + stack[-1][1] * balls
        stack.pop(-1)
        # print(f'balls: {balls} stack: {stack} sum: {sum}')
        print(sum)

def wa():
    queries = int(input())
    stack = []
    for query in range(queries):
        q = [int(a) for a  in input().split(" ")]
        if q[0] == 1:
            stack.insert(0, [q[2], q[1]]) # store an object with the ballCount and ballValue
        else:
            balls = q[1]
            sum = 0
            calculatePopSum(balls, stack, sum)

from collections import deque
def ac(): # RTE with 20/22
    q = int(input())
    deq = deque([]) # deque with dictionaries inside [ {x1:k1},{x2:k2},...} ]
    while q:
        q-=1
        query = list(map(int, input().split()))
        if query[0] == 1:
            deq.append([query[1],query[2]])
        else:
            if query[0] == 1: # append operation
                if len(deq) > 0 and query[1] == deq[-1][0]:
                    deq[-1][1] += query[2]
                else:
                    deq.append([query[1],query[2]])
            else: # pop operation
                
                if len(deq) >= 1:
                    print(popping(deq, query[1], 0))
def popping(dq, c, sum):
    # print(f"BEFORE dq: {dq} c: {c} sum: {sum}")
    if dq[0][1] < c:
        sum += dq[0][0]*dq[0][1]
        c -= dq[0][1]
        dq.popleft()
        # print(f"1 AFTER dq: {dq} c: {c} sum: {sum}")
        return popping(dq, c, sum)
    elif dq[0][1] > c:
        sum += dq[0][0]*c
        dq[0][1] -= c
        c = 0
        # print(f"2 AFTER dq: {dq} c: {c} sum: {sum}")
        return sum
    else:
        sum += dq[0][0]*c
        dq.popleft()
        # print(f"3 AFTER dq: {dq} c: {c} sum: {sum}")
        return sum

if __name__ == "__main__":
    # wa()
    rte()