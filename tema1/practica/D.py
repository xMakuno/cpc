closed = [')', '}', ']']
open = ['(','{','[']

def checkSeq(sequence):
    stack = []
    for char in sequence:
        if len(stack) == 0 and char in closed:
            print('NO') # length zero char closed
            return
        else:
            if char in open:
                stack.append(char)
                # print(stack)
            else:
                if closed.index(char) == open.index(stack[-1]):
                    stack.pop(-1)
                    # print(stack)
                else:
                    print('NO') # index didnt match
                    return  
    if len(stack) > 0:
        print('NO') #  stack not empty
        return
    else:
        print('YES')

if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        checkSeq(input())