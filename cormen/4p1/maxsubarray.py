# 16 June 2025
# sidb95
# maximum subarray problem using divide and conquer 
# strategy

def mergeFunc(A, mid, n):
    if (mid == 0):
        return 0
    x = 0
    y = 0
    maxl = 0
    maxr = 0
    for i in range(mid, -1, -1):
        x += A[i]
        if (x > maxl):
            maxl = x
        #
    #
    for i in range (mid + 1, n):
        y += A[i]
        if (y > maxr):
            maxr = y
        #
    return maxl + maxr


def maxSubarrayAux(A, n):
    if (n <= 1):
        return 0
    mid = n // 2
    B = []
    for i in range(0, mid):
        B.append(A[i])
    C = []
    for i in range(mid, n):
        C.append(A[i])
    return max(mergeFunc(A, mid, n), max(maxSubarrayAux(B, len(B)), maxSubarrayAux(C, len(C))))

def maxSubarray(A, n):
    for i in range (n - 1, 0, -1):
        A[i] = A[i] - A[i - 1]
    return maxSubarrayAux(A[1:], n - 1)

def __main__():
    a = list(map(int, input().split()))
    print(maxSubarray(a, len(a)))

__main__()
