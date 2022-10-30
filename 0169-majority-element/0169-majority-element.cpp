#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int thresh = nums.size()/2;
        unordered_map<int, int> count;

        for (int num : nums) {
            if (++count[num] > thresh) {
                return num;
            }
        }

        return 0;
    }
};