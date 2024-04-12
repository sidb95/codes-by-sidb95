/*
sidb95
bhatoresiddharth@gmail.com
quick_sort
12.04.2024
*/

#include <stdlib.h>
#include <malloc.h> 

int* quickSort(int* numArr, int n, int start, int end) {
    int pivot=n-1, i=n-2, tmpVar;
    while (i >= 0 && numArr[pivot] < numArr[i]) {
        tmpVar = numArr[pivot];
        numArr[i] = tmpVar;
        tmpVar = numArr[i];
        pivot--;
    }
    quickSort(numArr, pivot-start+1, start, pivot);
    quickSort(numArr, end-pivot+1, pivot+1, end);
    return numArr;
}
