#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string h = "sadbussad";
	string n = "mmm";
	vector<int> nums;
	int h_len = h.length();
	int n_len = n.length();
	for (int i = 0; i < h_len; i++) 
	{
		if (h.compare(i, n_len, n) == 0)
		{
			nums.push_back(i);
		}
		nums.push_back(-1);
	}
	int co = -1;
	for (auto i : nums) 
	{
		if (i != -1) {
			co += i + 1;
			break;
		}
	}
	if (co >= 0) { cout << co; }
	else { cout << co; }
	return 0;
}