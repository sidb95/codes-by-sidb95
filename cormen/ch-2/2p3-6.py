# 16 June 2025
# sidb95
# 2.3-6

def recInsert(A, n, k):
    if (k == 0):
        return A
    else:
        A = recInsert(A, n, k - 1)
        key = A[k]
        if (key <= A[0]):
            for i in range(k - 1, -1, -1):
                A[i + 1] = A[i]
            #
            A[0] = key
            return A
        i = 0
        j = k
        mid = -1
        while (i <= j):
            mid = i + (j - i) // 2
            if ((mid - 1 >= 0) and A[mid] >= key and A[mid - 1] <= key):
                l = j - 1
                while (l >= mid):
                    A[l + 1] = A[l]
                    l -= 1
                A[mid] = key
                break
            elif (A[mid] < key):
                i = mid + 1
            else:
                j = mid - 1
            #
        #
        return A
    #

def __main__():
    A = list(map(int, input().split()))
    print(recInsert(A, len(A), len(A) - 1))

__main__()
