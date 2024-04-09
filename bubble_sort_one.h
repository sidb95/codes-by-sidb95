/*
sidb95
bhatoresiddharth@gmail.com 
bubble_sort_one
09.04.2024
*/

int* bubbleSort(int* numArr, int n) {
    int i=0, j=1, tmpVar, cmpVar = 0;
    while(1) {
            if(numArr[i] > numArr[j]) {
                tmpVar = numArr[i];
                numArr[j] = numArr[i];
                numArr[i] = tmpVar;
            }
            else {
                cmpVar = 1;
                continue;
            }
            i++;
            j++;
            if(j == n) {
                i = 0;
                j = 1;
                if(cmpVar == 1) {
                    break;
                }
            }
        }
    }
    return numArr;
}
