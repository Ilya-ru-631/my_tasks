#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,3,5,7};
    vector<int> neww;
    int first = 0;
    int second = 0;
    int target = 12;
    for(int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                neww.push_back(i);
                neww.push_back(j);
            }
        }

    }
    for (auto i : neww) {
        cout << i << " ";
    }
    return 0;
}