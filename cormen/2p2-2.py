# 10 June 2025
# sidb95
# selection sort

def myFunc(A, n):
    minVal = 10 ** 10
    for i in range(0, n):
        k = -1
        minVal = min(A[i:])
        for j in range(i, n):
            if (A[j] == minVal):
                k = j
                break
            #
        #
        if (k != -1):
            T = A[i]
            A[i] = A[k]
            A[k] = T
    #
    return A


def __main__():
    A = list(map(int, input().split()))
    print(myFunc(A, len(A)))

__main__()
