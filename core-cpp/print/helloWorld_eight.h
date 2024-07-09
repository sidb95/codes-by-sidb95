/*
helloWorld6.h
sidb95
bhatoresiddharth@gmail.com
04, 09 July 2024
*/

#include "print.h"

class Solution {
public:
    FLAG = false;
    Solution() {
        FLAG = true;
    }

    ~Solution() {
        FLAG = false;
    }

    void printFunc(string strA) {
       int size1 = strA.size();
       for (int i = 0; i < size1; i += 1) {
           printString(strA[size1 - 1 - i]);   
       }
      return;
    }
};
