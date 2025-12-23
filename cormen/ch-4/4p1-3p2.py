# 16, 17 June 2025
# sidb95
# 4p1-3 part 2 (brute force)

def isCorrect(A, n):
    c1 = 0
    c2 = 0
    for i in range(0, n):
        if (A[i] == 0):
            c1 += 1
        elif (A[i] == 1):
            c2 += 1
        if ((c2 - c1) < 0):
            return False
        #
    #
    print(c1, c2)
    return True

def plusOne(b, n):
    carry = (b[n - 1] + 1) // 2
    b[n - 1] = (b[n - 1] + 1) % 2
    for i in range(n - 2, -1, -1):
        num1 = b[i]
        b[i] = (b[i] + carry) % 2
        carry = (num1 + carry) // 2
    if (b == ([1] * n)):
        return ([0] * n)
    return b
    

def maxProfit(a, n):
    c = [-1] * n
    maxm = 0
    while (c != ([0] * n)):
        # print(c)
        if (isCorrect(c, n)):
            print(c)
            count = 0
            for i in range (0, n):
                if (c[i] == 1):
                    count -= a[i]
                if (c[i] == 0):
                    count += a[i]
            if (count > maxm):
                maxm = count
            #
        #
        c = plusOne(c, n)
        #
    #
    return maxm

def __main__():
    a = list(map(int, input().split()))
    n = len(a)
    print(maxProfit(a, n))

__main__()
