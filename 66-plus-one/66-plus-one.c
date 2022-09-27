#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {

	*returnSize = digitsSize;

	if (digits[digitsSize-1] != 9) {
		digits[digitsSize - 1]++;
	}

	else {
		for (int i = digitsSize - 1; i >= 0; i--) {
			if (digits[i] == 9) 
				digits[i] = 0;
			else {
				digits[i]++;
				return digits;
			}
		}

		(*returnSize)++;
		digits = realloc(digits, (*returnSize) * sizeof(int));
		digits[*returnSize - 1] = 0;
		digits[0] = 1;
	}
    
    return digits;
    
}