class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        size_t idx = 0;
        while (nums[idx] < target) {
            if (idx == nums.size()-1)
                return nums.size();

            idx++;
        }
        
        return idx;
    }
};