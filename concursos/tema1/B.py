bounces = 1

n, x = input().split(" ")
n = int(n)
x =  int(x)

l = [int(a) for a in input().split(" ")]
distance = 0

for idx in range(0, len(l)):
    #   print(f'idx: {idx}')
    if idx == 0:
        distance += l[0]
        # print(f'distance: {distance} bounces: {bounces}')
        if l[0] <= x:
            bounces += 1
        else:
            break
    else:
        distance += l[idx]
        # print(f'distance: {distance} bounces: {bounces}')
        if distance <= x:
            bounces += 1
        else:
            break

print(bounces)