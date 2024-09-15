if __name__ == "__main__":
    s = input()
    q = int(input())
    reverse = False
    for i in range(q):
        query = [a for a in input().split(" ")]
        if query[0] == '1':
            reverse = not reverse
        else:
            if query[1] == '1':
                if not reverse:
                    s = query[-1] + s[::]
                else:
                    s = s[::] + query[-1]
            else:
                if not reverse:
                    s = s[::] + query[-1]
                else:
                    s = query[-1] + s[::]
    if not reverse:
        print(s)
    else:
        print(s[::-1])