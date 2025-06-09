/*
Main File Print 10
sidb95
bhatoresiddharth@gmail.com 
11 July 2024
*/

#include "print.h"

class Solution {
public:
    void mainP10(string strA) {
        Print P1;
        int size1 = strA.size();
        for (int i = 0; i < size1; i += 1) {
            P1.printString(strA[i]);
        }
        P1.printString("\n");
        return;
    }
};
