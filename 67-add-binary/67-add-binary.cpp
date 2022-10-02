#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::reverse;
using std::cout;

class Solution {
public:
    string addBinary(string a, string b) {
        
        string result = "";
        int a_size = a.size() - 1;
        int b_size = b.size() - 1;
        int value = 0;

        while (a_size >= 0 || b_size >= 0 || value > 0) {

            if (a_size >= 0) {
                value += a[a_size] - '0';
                a_size--;
            }

            if (b_size >= 0) {
                value += b[b_size] - '0';
                b_size--;
            }
            
            result += (value % 2 + '0');
            value = value / 2;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
