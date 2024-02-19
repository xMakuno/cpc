from collections import deque

def parsePush(deq, word, val):
    if word == 'pushLeft':
        deq.appendleft(val)
        print(f'Pushed in left: {val}')
    elif word == 'pushRight':
        deq.append(val)
        print(f'Pushed in right: {val}')
    else:
        print("cagaste push")

def parsePop(deq, word):
    if word == 'popLeft':
        print(f'Popped from left: {deq.popleft()}')
    elif  word == 'popRight':
        print(f'Popped from left: {deq.pop()}')
    else:
        print("cagaste pop")

if __name__ == "__main__":
    T = int(input())

    for i in range(1, T+1):
        print(f'Case {i}:')
        n, m = [int(a) for a in input().split(" ")]
        dq = deque([])
        for i in range(0, m):
            command = [a for a in input().split(" ")]
            if command[0][1] == 'u': # if second char of the word is u == push else o == pop
                if len(dq) >= n: # check if the deque is full
                    print("The queue is full")
                else:
                    parsePush(dq, command[0], int(command[1]))
            elif command[0][1] == 'o':
                if len(dq) <= 0:
                    print("The queue is empty")
                else:
                    parsePop(dq, command[0])
            else:
                print("cagaste command")