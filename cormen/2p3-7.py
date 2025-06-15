# 16 June 2025
# sidb95

def twoSum(A, n, S):
    A = sorted(A)
    for k in range(0, n - 1):
        s = S - A[k]
        i = k + 1
        j = n - 1
        while (i <= j):
            mid = i + (j - i) // 2
            if (s < A[mid]):
                j = mid - 1
            elif (s == A[mid]):
                return ((A[k], A[mid]))
            else:
                i = mid + 1
            #
        #
    #
    return -1

def __main__():
    A = set(map(int, input().split()))
    S = int(input())
    n = len(A)
    print(twoSum(A, n, S))

__main__()
