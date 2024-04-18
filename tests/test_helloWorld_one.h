
#include<iostream>
#include "core-cpp/helloWorld_one.h"

using namespace std;

class TestSolution {
    public:
    bool testHelloWorld_one(bool cmpVar) {
        Solution mySolution;
        cmpVar = ("hello" == mySolution.helloWorld());
        return cmpVar;
    }
}
