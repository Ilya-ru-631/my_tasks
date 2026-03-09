#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> nums = { 0, 0, 1, 2, 2,36, 3, 3, 3, 4 };
	vector<int> neww;
	int k = 0;
	for (int i = 0; i < nums.size(); i++) {
		int cnt = count(nums.begin(), nums.end(), nums[i]);
		if (cnt == 1)
		{
			neww.push_back(nums[i]);
			k++;
		}
		if (cnt > 1) {
			if (find(neww.begin(), neww.end(), nums[i]) == neww.end()) {
				neww.push_back(nums[i]);
				k++;

			}
		}


	}
	cout << k << endl;
	cout << "New numbers = { ";
	for (int i = 0; i < neww.size(); i++) {
		cout << neww[i] << " ";
	}
	cout << "}";
	return 0;

}