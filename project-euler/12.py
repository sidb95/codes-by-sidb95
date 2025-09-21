# sidb95
# 11 Jan 2025

def numDivisors(n):
    count = 2
    num1 = n // 2 + 1
    for i in range(2, num1):
        if ((n % i) == 0):
            count += 1
            print(count)
        #
    #
    return count

def __main__():
    k = int(input())
    a = 1
    num1 = 0
    while (num1 != k):
        num1 = numDivisors(a)
        print(num1)
        a += 1
    print(a)

__main__()
