int removeDuplicates(int* nums, int numsSize) {
	if (numsSize == 1) return 1;
	
	size_t cnt = 0;

	for (int i = 1; i < numsSize; i++) {
		if (nums[i - 1] == nums[i])
			cnt++;
		else
			nums[i - cnt] = nums[i];
	}

	return numsSize - cnt;
}