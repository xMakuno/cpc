# Problem H case generator
from random import randint
n = int(input())
thing = []
for i in range(n):
    thing.append(randint(0, int(1000)))
print(*thing)