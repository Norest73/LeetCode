#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {

		size_t d_size = digits.size();

		if (digits.back() != 9) {
			digits[d_size - 1]++;
			return digits;
		}
		
		else {
			for (int i = d_size - 1; i >= 0; i--) {

				if (digits[i] == 9) {
					if (i == 0) {
						digits[i] = 1;
						digits.push_back(0);
					}
					else
						digits[i] = 0;
				}

				else {
					digits[i]++;
					break;
				}
			}
		}
		return digits;
	}
};