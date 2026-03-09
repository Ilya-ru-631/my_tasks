#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string s = "Hello world mazafaka";
	string word[10];
	string ww = "";
	int count = 0;

	for (int i = 0; i < s.length(); i++) 
	{
		if (s[i] != ' ') 
		{
			ww += s[i];
		}
		else {
			if (ww != "") {
				word[count] = ww;
				count++;
				ww = "";
			}
		}
	}
	if (ww != "") {
		word[count] = ww;
		count++;
	}
	int nn = size(word[count - 1]);
	cout << nn;
	return 0;
}