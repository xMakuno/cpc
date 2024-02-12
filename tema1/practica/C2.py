def parsePush(operation, queue, val):
    if operation == "pushLeft":
        queue.insert(0, val)
        print(f'Pushed in left: {val}\n')
    if operation == "pushRight":
        queue.append(val)
        print(f'Pushed in right: {val}\n')

def parsePop(operation, queue):
    if operation == "popLeft":
        print(f'Popped from left: {queue.pop(0)}\n')
    if operation == "popRight":
        print(f'Popped from left: {queue.pop(-1)}\n')

if __name__ == "__main__":
    caseNum = input()
    caseNum = int(caseNum)
    cases = []
    for i in range(caseNum):
        size, commands = input().split(" ")
        size = int(size)
        commands = int(commands)
        arrayCommands = []
        for i in range(commands):
            arrayCommands.append(input())