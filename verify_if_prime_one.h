/*
sidb95
bhatoresiddharth@gmail.com
verify_if_prime_one
05.04.2024
*/
 
// prime of a whole number

#include <math.h>

short int verifyIfPrime(long long int n, short int cmpOut) {
    cmpOut = 0;
    if(n == 0) {
        cmpOut = 0;
    }
    else if(n == 1) {
        cmpOut = 0;
    }
    else {
        long long int qrtN = sqrt(n);
        long long int qrtN = floor(qrtN);
        int i;
        for(i=1; i<=qrtN; i++) {
             if(i*i == n) {
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