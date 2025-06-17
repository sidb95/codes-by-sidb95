# 12 June 2025
# sidb95
# 2.3-4

def recInsert(A, n, k):
    if (k == 0):
        return A
    else:
        A = recInsert(A, n, k - 1)
        key = A[k]
        i = k - 1
        while ((i >= 0) and (A[i] > key)):
            A[i + 1] = A[i]
            i -= 1
        #
    A[i + 1] = key
    return A

def __main__():
    A = list(map(int, input().split()))
    print(recInsert(A, len(A), len(A) - 1))

__main__()
