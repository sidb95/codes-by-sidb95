/*
sidb95
bhatoresiddharth@gmail.com
sumOfFirst_N
04.04.2024
*/

// sum of first n natural numbers

long long int sumOfFirstN(long long int n, int answer) {
    if(n == 1) {
        answer = 1;
    }
    else {
        answer = n + sumOfFirstN(n-1); 
    }
    return answer;
}
