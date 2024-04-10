/*
sidb95
bhatoresiddharth@gmail.com 
insertion_sort
10.04.2024
*/

int* insertionSort(int n) {
    int* numArr;
    numArr = (int*)malloc(sizeof(int)*n);
    int i=0, tmpVar, j=1, swapVar;
    scanf("%d", &tmpVar);
    numArr[i] = tmpVar;
    i++;
    for(i=0; i<n; i++) {
        if(numArr[i] > tmpVar) {
            swapVar = numArr[i];
            numArr[i] = tmpVar;
            for(j=i+1; j<n; j++) {
                 numArr[j] = tmpVar;
                 if(j != n-1) {
                      tmpVar = numArr[j+1];
                 }
                 else {
                    continue;
                 }
             }
        }
    }
}