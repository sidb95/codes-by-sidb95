/*
sidb95
bhatoresiddharth@gmail.com 
merge_sort
11.04.2024
*/

// n : int, n >= 1

int* mergeSortAux(int* numArr, int n, int start, int end, int* retArr) {
    retArr[0] = numArr[start];
    int count = 1;
    int mid = (start+(end-start)/2);
    start++;
    if(start >= end) {
         return retArr;
    }
    int i=start, j=mid+1;
    for(int i=start; i<=mid; i++) {
        if(numArr[i] > numArr[j]) {
            retArr[count] = numArr[j];
            j++;
        }
        else {
            retArr[count] = numArr[i];
            i++;
        }
        count++;
    }
    if(count != n) {
        while(count != n) {
            if(i == mid) {        
                retArr[count] = numArr[i];
                count++;
                i++;
            }
            else {
                retArr[count] = numArr[j];
                count++;
                j++;
            }
        }
    }
    return retArr;
}

int* mergeSort(int* numArr, int n, int start, int end) {
    int* retArr;
    retArr = (int*)malloc(sizeof(int)*(end-start+1));
    if(start >= end) {
        return numArr;
    }
    else {
        int mid = (start+(end-start)/2);
        mergeSort(mergeSortAux(numArr, n, start, mid, retArr), mergeSortAux(mid + 1, end), retArr);
    }
    return retArr;
}