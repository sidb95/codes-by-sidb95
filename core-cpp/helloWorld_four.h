/*
helloWorld_four
bhatoresiddharth@gmail.com 
sidb95
14 May 2024
*/

#include <iostream>
#include <string>

class Solution {
private:
    string myStr = "sidb95";
    void changeStr(string& varStr) {
        myStr = varStr;
        return;
    }
public:
    Solution(string str="1) ") {
        string varStr1 = myStr;
        str += varStr1;
        changeStr(str)
    }
    void printFunc() {
        cout << myStr << endl;
        return;
    }
};

class Main::Solution {
public:
    Main() {
        Solution sol = new Solution("");
        sol.printFunc();
    }
};