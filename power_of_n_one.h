/*
sidb95
bhatoresiddharth@gmail.com
power_of_n_one
05.04.2024
*/

long long int powerOfN(long long int n, long long int k, long long int answer) {
    answer = 1;
    if(k == 0) {
        answer = 1;
    }
    else if(k == 1) {
        answer = n;
    }
    else {
        int i;
        for(i=0; i<k; i++) {
            answer *= (i+1);
        }
    }
    return answer;
}