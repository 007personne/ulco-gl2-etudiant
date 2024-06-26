
def fibo_naive(n: int):
    assert n >= 0
    return n if n < 2 else fibo_naive(n-1) + fibo_naive(n-2)


def fibo_iterative(n:int):
    if n == 0:
        return 0
    if n == 1:
        return 1

    current = 1
    x = 0
    y = 1

    while current != n:
        current += 1
        temps = x + y
        x = y
        y = temps
    return y
