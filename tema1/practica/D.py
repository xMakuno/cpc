closed = [')', '}', ']']
open = ['(','{','[']

def checkSeq(sequence):
    stack = []
    for idx, char in enumerate(sequence):
        if len(stack) == 0 and char in closed:
            print('NO')
            return
        """ elif char in open and stack[-1] not in : """
            
         


if __name__ == "__main__":
    n = int(input())
    for i in range(n):
        checkSeq(input())