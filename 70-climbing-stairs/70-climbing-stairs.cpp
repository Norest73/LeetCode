#include <iostream>

class Solution {
public:
    int climbStairs(int n) {
        
        if (n <= 2)
            return n;

        int cnt = 2;
        int res[3] = { 1, 1, 2 };
        while (cnt < n) {
            cnt++;
            res[0] = res[1], res[1] = res[2];
            res[2] = res[0] + res[1];
        }
        
        return res[2];
    }
};