/*
sidb95
bhatoresiddharth@gmail.com
two_sum
06.04.2024
*/

short int verifyTwoSum(int* arr, int n, int sum, int cmpOut) {
    cmpOut = 0;
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=1; j<n; j++) {
            if(arr[j] + arr[i] == sum) {
                cmpOut = 1;
                break;
            }
            else {
                continue;
            }
        }
    }
    return cmpOut;
}