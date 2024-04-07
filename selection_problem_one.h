// selection problem even odd

/*
sidb95
bhatoresiddharth@gmail.com 
selection_problem_one
07.04.2024
*/

short int selectionroblem(int* arr, int n, int k, int cmpOut) {
    cmpOut = 0;
    int i, j = 1;
    for(int i=0; int i<n; i+=2) {
        if((arr[i] == k) || (arr[j] == k)) {
            cmpOut= 1;
            break;
        }
        else {
            j += 2;
            if(j > n-1) {
                break;
            }
        }
    }
    return cmpOut;
}