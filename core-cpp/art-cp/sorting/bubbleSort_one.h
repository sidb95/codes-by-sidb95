/*
bubbleSort_one
bhatoresiddharth@gmail.com
sidb95
15 May 2024
*/

#include <bits/stdc++.h>

class Solution {    
private:    
    void print(string str) {
        cout << str << endl;
        return;
    }

    bool verifyAscSort(vector<int>& nums, int n) {
        bool retVal = true;
        for (int i=1; i<n; i++) {
            if (nums[i] < nums[i-1]) {
                retVal = false;
                break;
            }
        }
        return retVal;
    }

public:
    Solution() {
        print("Solution instantiated");
    }

    void swap(vector<int>& nums, int l, int r) {
        int t = nums[l];
        nums[l] = nums[r];
        nums[r] = t;
        return;
    }

    vector<int> bubbleSort(vector<int>& nums, int n) {
        int FLAG;
        int lastIndex;
        for (int i=n-1; i>0; i--) {
            FLAG = false;
            for (int j=i-1; j>=0; j--) {
                if (verifyAscSort(nums, j+1)) {
                    FLAG = true;
                    lastIndex = j;
                    break;
                }
            }
            for (int l=i-1; l>=(FLAG)? (lastIndex) : 0; l--) {
                if ((l >= 0) && (l < n) && (nums[l] > nums[l+1])) {
                    swap (nums, l, l+1);
                }
            } 
        }
        return nums;
    }
};