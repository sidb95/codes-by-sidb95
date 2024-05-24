/*
helloWorld_seven
bhatoresiddharth@gmail.com 
sidb95
24 May 2024
*/

#include <../../art-cp/core/Solution.h>

class printString::Solution {
private:
     string str = "hello world!"
public:
    void recursivePrint(string str, n, i = 0) {
        if (i == n) {
            return;
        }
        print(str[i]);
        recursivePrint(str, n, i + 1);
        return;
    }
}
