#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

bool test(string s, string t) {
	if (s.length() != t.length()) return false;
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	return s == t;
	

}

int main() {
	setlocale(LC_ALL, "ru");
	string s = "qwert";
	string t = "qwetr";
	if (test(s, t)) {
		cout << "True";
	}
	else { cout << "False"; }
	return 0;
}

