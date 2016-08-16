#include <iostream>
#include <vector>
using namespace std;

class Solution {
	public:
		int maxProduct(vector<int>& nums) {
			if (nums.empty())
				return 0;
			int currentMax = nums[0];
			int currentMin = nums[0];
			int result = currentMax;
			for (int i = 1; i < nums.size(); i++) {
				if (nums[i] == 0) {
					currentMax = currentMin = 0;
				} else {
					int a = currentMax * nums[i];
					int b = currentMin * nums[i];
					currentMax = max(max(a, b), nums[i]);
					currentMin = min(min(a, b), nums[i]);
				}
				if (currentMax > result)
					result = currentMax;
			}
			return result;
		}
};

int main() {
	vector<int> nums = {0, 1};
	Solution sol;
	cout << sol.maxProduct(nums) << endl;

	return 0;
}
