n = int(input())
while n != 0:
    if n == 1:
        print('Discarded cards:')
        print('Remaining cards: ', 1)
    if(n == 2):
        print('Discarded cards: ', 2)
        print('Remaining cards: ', 1)
    elif n > 2:
        disc = []
        deck = [*range( n,0,-1)]
        while len(deck) >= 2:
            disc.append(deck.pop(-1))
            deck.insert(0, deck.pop(-1))
        print('Discarded cards: ', end="")
        print(*disc, sep=", ")
        print('Remaining card:', deck[0])
    n = int(input())