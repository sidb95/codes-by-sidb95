/*
sidb95
bhatoresiddharth@gmail.com
factorial_sum
05.04.2024
*/

#include "factorialN.h"

long long int factorialSum(long long int n, long long int answer) {
    if(n == 1) {
        answer = 1;
    }
    else if(n > 1) {
        answer = factorialN(n) + factorialSum(n-1);
    }
    return answer;
}