#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<int> nums = { 3,2,2,3 };
	vector<int> neww;
	int val = 2;
	int k = 0;
	for (auto i : nums) {
		if (i != val) {
			neww.push_back(i);
			k++;
		}
	}
	nums.clear();
	//nums.insert(nums.end(), neww.begin(), neww.end());
	for (auto i : neww) {
		nums.push_back(i);
	}
	for (auto i : nums) {
		cout << i;
	}
	cout << endl;
	cout << k;
	return 0;
}
