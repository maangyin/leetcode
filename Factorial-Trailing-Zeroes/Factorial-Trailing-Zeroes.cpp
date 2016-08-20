#include <iostream>

using namespace std;

class Solution {
public:
	int trailingZeroes(int n) {
		int count = 0;
		for ( ; n != 0; n /= 5)
			count += n / 5;
		return count;
	}
};

int main() {
	Solution sol;
	cout << sol.trailingZeroes(30) << endl;
	return 0;
}
