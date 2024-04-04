/*
sidb95
bhatoresiddharth@gmail.com
test_sum_of_first_N
04.04.2024
*/

#include "sumOfFirst_N.h"

short int testSumOfFirstN(int n, int calcAnswer) {
    calcAnswer = sumOfFirstN(n);
    int answer = 0;
    int i;
    for(i=1; i<=n; i++) {
        answer += i;
    }
    return (answer == calcAnswer);
}
