/*
sidb95
bhatoresiddharth@gmail.com
fibonacci_one
04.04.2024
*/


void fibonacciOneAuxiliary(int n) {
    int sum;
    printf(fibonacciOne(n, sum));
    return;
}

int fibonacciOne(int n, int sum){
    if(n == 0) {
        sum = 0;
    }
    else if(n == 1) {
        sum = 1;
    }
    else {
        sum = n+fibonacciOne(n-1, sum);
    }
    return sum;
}