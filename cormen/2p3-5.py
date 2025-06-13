# 13 June 2025
# sidb95

def search(A, n, key):
    i = 0
    j = n - 1
    while (i <= j):
        mid = i + (j - i) // 2
        if (A[mid] < key):
            i = mid + 1
        elif (A[mid] == key):
            return True
        else:
            j = mid - 1
        #
    #
    return False

def __main__():
    a = list(map(int, input().split()))
    key = int(input())
    print(search(a, len(a), key))

__main__()
