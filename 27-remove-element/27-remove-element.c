#include <stdio.h>

int delete(int* nums, int numsSize, int idx) {
	for (int i = idx; i < numsSize - 1; i++) {
		nums[i] = nums[i + 1];
	}

	return 0;
}

int removeElement(int* nums, int numsSize, int val) {

	int cnt = 0;

	for (int i = 0; i < numsSize; i++) {

		if (*(nums+i-cnt) == val) {
			delete(nums, numsSize, (i - cnt));
			cnt++;
		}
	}

	return numsSize - cnt;
}