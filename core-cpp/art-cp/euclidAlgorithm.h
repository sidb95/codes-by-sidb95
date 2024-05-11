/*
euclidAlgorithm
sidb95
bhatoresiddharth@gmail.com
11 May 2024
*/

#include <iostream>

using namespace std;

class Solution:
public:
    int retAnswer;
    int coupleFactor(int m, int n, int r) {
        int t;
        if (m < n) {
            t = n;
            n = m;
            m = t;
        }
        r = (m % n);
        if (r == 0) {
            retAnswer = n;
            return retAnswer;
        }
        else {
            m = n;
            n = r;
            coupleFactor(m, n, r);
        }
        return;
    }
};