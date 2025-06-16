# 16 June 2025
# sidb95
# 2-4d

class Solution:
    def  __init__(self):
        self.count = 0

    def merge(self, A, p, q, r):
        if (p == r):
            return A
        L = []
        R = []
        for i in range(p, q + 1):
            L.append(A[i])
        for j in range(q + 1, r + 1):
            R.append(A[j])
        n1 = len(L)
        n2 = len(R)
        #
        for i in range(0, n1):
            for j in range(0, n2):
                if (L[i] > R[j]):
                    self.count += 1
                #
            #
        #
        i = 0
        j = 0
        while ((i < n1) and (j < n2)):
            if (L[i] < R[j]):
                A[p + i + j] = L[i]
                i += 1
            else:
                A[p + i + j] = R[j]
                j += 1
            #
        #
        if (i == n1):
            while (j != n2):
                A[p + i + j] = R[j]
                j += 1
            #
        #
        if (j == n2):
            while (i != n1):
                A[p + i + j] = L[i]
                i += 1
            #
        #
        return A

    def mergeSort(self, A, n, start, end):
        if (start >= end):
            return A
        else:
            mid = start + (end - start) // 2
            A = self.mergeSort(A, n, start, mid)
            A = self.mergeSort(A, n, mid + 1, end)
            return self.merge(A, start, mid, end)

def __main__():
    S = Solution()
    a = list(map(int, input().split()))
    A = S.mergeSort(a, len(a), 0, len(a) - 1)
    print(S.count)

__main__()
