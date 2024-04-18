/*
sidb95
bhatoresiddharth@gmail.com 
helloWorld_one
18.04.2024
*/

#include <iostream>
using namespace std;

class Solution {
    public:
    string varStr = {'h', 'e', 'l', 'o'};
    int strLen = varStr.length;
    void helloWorld() {
        for(int i=0; i<strLen; i++) {
            cout << varStr[i];
            if(varStr[i] == 'l') {
                 cout << varStr[i];
            }
        }
        cout << endl;
        return;
    }
};