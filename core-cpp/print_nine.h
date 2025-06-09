/*
print_nine.h
sidb95
bhatoresiddharth@gmail.com
09 July 2024
*/
#include "print.h"

class Solution() {
public:
  FLAG = false;
  Solution() {
    FLAG = true;
  }

  ~Solution() {
    FLAG = false;
  }

  void printFunc(string strA) {
    string retStr = "";
    for (int i = 0; i < strA.size(); i += 1)
      printString(strA[i]);
    printString("\n");
    return;
  }
};
