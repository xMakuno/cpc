def parsePush(operation, queue, val):
    if operation == "pushLeft":
        queue.insert(0, val)
        print(f'Pushed in left: {val}')
    if operation == "pushRight":
        queue.append(val)
        print(f'Pushed in right: {val}')

def parsePop(operation, queue):
    if operation == "popLeft":
        print(f'Popped from left: {queue.pop(0)}')
    if operation == "popRight":
        print(f'Popped from left: {queue.pop(-1)}')

if __name__ == "__main__":
    caseNum = input()
    caseNum = int(caseNum)
    for i in range(caseNum):
        size, commands = input().split(" ")
        size = int(size)
        commands = int(commands)
        print(f'\nCase {i+1}:')
        doubleQueue = []
        for j in range(commands):
            x = input().split(" ")
            if len(x) == 2:
                if len(doubleQueue) == size:
                    print("The queue is full")
                else:
                    parsePush(x[0], doubleQueue, int(x[1]))
            else: # Pop command
                # Cannot pop if empty
                if len(doubleQueue) == 0:
                    print("The queue is empty")
                else:
                    parsePop(x[0], doubleQueue)