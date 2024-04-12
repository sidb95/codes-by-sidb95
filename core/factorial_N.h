/*
sidb95
bhatoresiddharth@gmail.com
factorial_N
04.04.2024
*/

// 0! = 1

long long int factorialN(long long int n, long long int answer) {
    if(n == 0) {
        answer = 1;
    }
    else {
        answer = n*factorialN(n-1);
    }
    return answer;
}
