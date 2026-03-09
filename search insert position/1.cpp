//ѕервый способо - мой - более долгий со сложностью O(n * log(n))
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	vector<int> nums = { 1,3,5,6 };
//	int target = 7;
//	int result = -1;
//	for (int i = 0; i < nums.size(); i++) {
//		if (nums[i] == target) {
//			result = i;
//			break;
//		}
//	}
//	if (result == -1) {
//		nums.push_back(target);
//		sort(nums.begin(), nums.end());
//		for (int i = 0; i < nums.size(); i++) {
//			if (nums[i] == target) {
//				result = i;
//				break;
//			}
//		}
//	}
//	cout << result;
//	return 0;
//}



//¬торой способ со сложностью O(log(n)) - сам до него не догодалс€!
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int poisk(vector<int>& nums, int target) {
	int left = 0;
	int right = nums.size() - 1;
	while (left <= right) {
		int mid = left + (right - left) / 2;
		if (nums[mid] == target) {
			return mid;
		}
		else if (nums[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return left;
}

int main() {
	vector<int> nums = { 1,3,5,6 };
	int target = 7;
	cout << poisk(nums, target);
	return 0;
}