// selection problem
/*
sidb95
bhatoresiddharth@gmail.com
find_k_inside_array
06.04.2024
*/

short int findKInsideArray(int* arr, int n, int k, short cmpOut) {
    cmpOut = 0;
    int i;
    for(i=0; i<n; i++) {
        if(arr[i] == k) {
            cmpOut = 1;
            break;
        }
        else {
            continue;
        }
    }
    return cmpOut;
}