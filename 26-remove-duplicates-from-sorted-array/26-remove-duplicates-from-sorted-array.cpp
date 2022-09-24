class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 1) { return 1; }
        
        size_t cnt = 0;
        
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] == nums[i])
                cnt++;
            else
                nums[i - cnt] = nums[i];
        }
        
        return nums.size() - cnt;
    }
};