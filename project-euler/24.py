# PE 24
# sidb95
# 10 Feb 2025


"""
1 2  5 4 3
"""
def calcAnswer(a, itr):
    n = len(a)
    minVal = 10000000000
    ptr = -1
    for i in range(itr + 1, n):
        if (a[i] - a[itr] > 0):
            if (minVal > (a[i] - a[itr])):
                ptr = i
                minVal = a[i] - a[itr]
        #
    #
    return ptr


def nextPerm(a):
    n = len(a)
    itr = n - 1
    while ((itr > 0) and (a[itr] < a[itr - 1])):
        itr -= 1
    #
    itr -= 1
    ptr = calcAnswer(a, itr)
    TEMP = a[itr]
    a[itr] = a[ptr]
    a[ptr] = TEMP
    a = a[:itr + 1] + sorted(a[itr + 1:])
    return a

def __main__():
    k = int(input())
    a = list(map(int, list(input())))
    for i in range(0, k):
        a = nextPerm(a)
    print("".join(list(map(str, a))))

__main__()
