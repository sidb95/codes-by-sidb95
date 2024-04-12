/*
sidb95
bhatoresiddharth@gmail.com 
selection_sort
10.04.2024
*/

int* selectionSort(int* numArr, int n, int* minNums) {
    int indexMin = 0;
    minNums[0] = EOF;
    int j=0;
    while(j != n) {
        for(int i=0; i<n; i++) {
            if(numArr[i] < numArr[indexMin]) {
            indexMin = i;
        }
        minNums[j] = numArr[indexMin];
        j++;
    }
    minNums[j] = EOF;
    return minNums;
}
