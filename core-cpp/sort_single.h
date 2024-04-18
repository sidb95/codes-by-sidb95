/*
sidb95
bhatoresiddharth@gmail.com
sort_single
19.04.2024
*/

#include <iostream>
#include <sort.h>

class Solution {
    public:
    long long int* sortSingle(long long int* numArr, int n) {
        sort(numArr, 0, n-1);
        return numArr;
    }
};
