/*
sidb95
testing factorialN function
04.04.2024
*/

#include "factorial_N.h"

short int testFactorialN(int n, int answer) {
    answer = factorialN(n, 0);
    calcAnswer = 1;
    int i = 1;
    for(i=1; i<=n; i++) {
        calcAnswer *= i;
    }
    return answer == calcAnswer;
}