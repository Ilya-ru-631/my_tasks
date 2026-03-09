#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> anagramGroups;
        for (auto s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            anagramGroups[sorted].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& i : anagramGroups) {
            result.push_back(i.second);
        }
        return result;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    Solution a;
    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
    vector<vector<string>> result = a.groupAnagrams(strs);
    cout << "Сгруппированные анаграммы:" << endl;
    for (int i = 0; i < result.size(); i++) {
        cout << "Группа " << i + 1 << ": ";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}