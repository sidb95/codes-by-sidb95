/*
sidb95
test_fibonacci_one_1
04.04.2024
*/

#include "fibonacci_One.h"


short int test_fibonacci_one_1(int n, int calcAnswer) {
    calcAnswer = fibonacciOne(n);
    int first = 1;
    int second = 1;
    int sum = first + second;
    int i;
    for(i=2; i<=n; i++) {
        sum += i;
    }
    return (sum == calcAnswer);
}