class Solution {
public:
	int removeElement(vector<int>& nums, int val) {

		size_t cnt = 0;
		size_t n_size = nums.size();

		for (int i = 0; i < n_size; i++) {

			if (nums[i - cnt] == val) {
				nums.erase(nums.begin()+(i-cnt));
				cnt++;
			}			
		}

		return nums.size();
	}
};