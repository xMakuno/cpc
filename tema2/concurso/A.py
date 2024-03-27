if __name__ == "__main__":
    thing = []
    while True:
        temp = int(input())
        thing.append(temp)
        if temp == 0:
            break
    for i in thing[::-1]:
        print(i)