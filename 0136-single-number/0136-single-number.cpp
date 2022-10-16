class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        map<int, int> n_dict;
        for (int i = 0; i < nums.size(); i++) {
            if (n_dict.find(nums[i]) != n_dict.end())
                n_dict[nums[i]]++;
            else
                n_dict[nums[i]] = 1;
        }

        for (auto i = n_dict.begin(); i != n_dict.end(); i++) 
            if (i->second == 1)
                return i->first;
        return 0;
    }
};