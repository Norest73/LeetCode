int searchInsert(int* nums, int numsSize, int target) {

	size_t idx = 0;
    
	while (*(nums + idx) < target) {
		if (idx == numsSize - 1)
			return numsSize;
		idx++;
	}

	return idx;
}