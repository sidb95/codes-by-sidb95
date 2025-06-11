# 10 June 2025
# sidb95

def myFunc(A, B, n):
    C = [0] * (n + 1)
    carry = 0
    for i in range(n, 0, -1):
        C[i] = (A[i - 1] + B[i - 1] + carry) % 2
        carry = (A[i - 1] + B[i - 1] + carry) // 2
    #
    C[0] = carry
    return C

def __main__():
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    n = len(A)
    print(myFunc(A, B, n))

__main__()
