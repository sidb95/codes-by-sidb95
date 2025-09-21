import random

def __main__():
    t = int(input())
    x = 0
    y = 0
    for i in range(0, t):
        n = random.randint(0, 2)
        if (n == 0):
            x += 1
        #
        if (n == 1):
            y += 1
        #
    print(x / y)
    return

__main__()
