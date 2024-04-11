/*
sidb95
bhatoresiddharth@gmail.com 
merge_sort
11.04.2024
*/

// n : int, >= 1

int* mergeSortAux(int* numArr, int n, int start, int end, int* retArr) {
    retArr[0] = numArr[start];
    start++;
    if(start >= end) {
         return retArr;
    }
    int i;
    for(int i=start; i<
    
}

int* mergeSort(int* numArr, int n, int start, int end) {
    int* retArr;
    retArr = (int*)malloc(sizeof(int)*(end-start+1));
    if(start >= end) {
        return numArr;
    }
    else {
        mergeSort(mergeSortAux(numArr, n, start, start+(end-start)/2, retArr), mergeSortAux((start+(end-start)/2) + 1, end), retArr);
    }
    return retArr;
}