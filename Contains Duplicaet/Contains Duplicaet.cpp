#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> nums = { 4,3,2,1, 4 };
	sort(nums.begin(), nums.end());
	int left = 0;
	int right = nums.size();
	int count = 0;
	for(int i = 0; i <= right; i++) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == nums[i]) {
			count++;
		}
		else if (nums[mid] < nums[i]) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
		
	}
	cout << count;
	return 0;
}