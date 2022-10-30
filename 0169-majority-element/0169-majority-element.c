#include <stdio.h>
#include <stdlib.h>

int cmp(const void* p, const void* q) {
	int a = *(int*)p, b = *(int*)q;
	if (a > b)
		return 1;
	else
		return -1;
}

int majorityElement(int* nums, int numsSize) {
	qsort(nums, numsSize, sizeof(int), cmp);
	return (nums[numsSize / 2]);
}
