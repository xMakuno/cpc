n = int(input())

array = [int(a) for a in input().split(" ")]
answer = []
for idx in range(0, len(array)):
    if idx == 0:
        answer.append(array[0])
    else:
        answer.append(array[idx] - array[idx-1])
print(*answer, "")