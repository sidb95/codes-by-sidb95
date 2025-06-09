def __main__():
    A = list(map(int, input().split()))
    i = 1
    n = len(A)
    while (i < n):
        j = i - 1
        key = A[i]
        k = i
        while ((j >= 0) and (key < A[j])):
            T = A[i]
            A[i] = A[j]
            A[j] = T
            i -= 1
            j -= 1
        i = k + 1
    #
    print(A)

__main__()
