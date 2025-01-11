def exp(a, b):
    if b == 0:
        return 1
    if (b & 1):
        return exp(a,b-1) * a
    res = exp(a,b>>1)
    return res * res

def rev_exp(a, b):
    if b == 0:
        return 1
    if (b & 1):
        return exp(a,b-1) * a
    res = exp(a,b>>1)
    return res * res


def solve():
    s = int(input(), 2)
    d = int(input(), 2)
    m = int(input(), 2)

    initial = m
    day = 0
    checkpoint = m
    m = m // exp(2,d)
    # m = m // (2**d)
    if m > 0:
        m+=s
        day += d
        if m > initial:
            print("Infinite money!")
            return
    while m > 0:
        checkpoint = m
        m = m // exp(2,d)
        # m = m // 2**d
        if m > 0:
            m+=s
            day += d
        else:
            break
    cont = day
    while checkpoint > 0:
        checkpoint = checkpoint >> 1
        cont+=1
        if checkpoint < 1:
            break
    print(bin(cont)[2:])

if __name__ == "__main__":
    solve()