# 16 June 2025
# sidb95
# optimal Max Subarray

def optimalMaxSubarray(A, n):
    maxm = 0
    s = 0
    for i in range(n - 1, 0, -1):
        A[i] = A[i] - A[i - 1]
    for i in range(1, n):
        s += A[i]
        if (s < 0):
            s = 0
        if (s > maxm):
            maxm = s
        #
    #
    print(maxm)

def __main__():
    a = list(map(int, input().split()))
    print(optimalMaxSubarray(a, len(a)))

__main__()
