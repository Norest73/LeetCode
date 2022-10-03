#include <iostream>

class Solution {
public:
    int mySqrt(int x) {

        long long left = 0, right = x;
        long long res = 0;
        
        while (left <= right) {
            
            long mid = (left + right) / 2;
            
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x) {
                res = mid;
                left = mid + 1;
            }
            else
                right = mid -1;
        }
        return res;
    }
};