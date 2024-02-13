def calculatePopSum(balls, stack, sum):
    # print(f'balls: {balls} stack: {stack} sum: {sum}')
    if stack[0][0] > balls:
        sum = sum + stack[0][1] * balls # calculate sum
        stack[0][0] = stack[0][0] - balls
        # print(f'balls: {balls} stack: {stack} sum: {sum}')
        print(sum)
    elif stack[0][0] < balls:
        sum = sum + stack[0][1] * stack[0][0]
        balls = balls - stack[0][0]
        stack.pop(0)
        calculatePopSum(balls, stack, sum)
    else:
        sum = sum + stack[0][1] * balls
        stack.pop(0)
        #print(f'balls: {balls} stack: {stack} sum: {sum}')
        print(sum)

if __name__ == "__main__":
    queries = int(input())
    stack = []
    for query in range(queries):
        q = [int(a) for a  in input().split(" ")]
        if q[0] == 1:
            stack.append([q[2], q[1]]) # store an object with the ballCount and ballValue
        else:
            balls = q[1]
            sum = 0
            calculatePopSum(balls, stack, sum)