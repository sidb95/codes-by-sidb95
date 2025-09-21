# 55 PE
# sidb95
# 10 Feb 2025

def calcAnswer(s):
    num1 = int(s[::-1]) + int(s)
    FLAG = False
    for i in range(0, 50):
        if (isPalindrome(str(num1))):
            FLAG = True
            break
        s1 = str(num1)
        num1 = int(s1) + int(s1[::-1])
    return not FLAG

def isPalindrome(s):
    return s[::-1] == s

def __main__():
    count = 0
    for i in range(1, 10001):
        if (calcAnswer(str(i))):
            count += 1
            #
        #
    #
    print(count)

__main__()
