#include <iostream>
#include <vector>
using namespace std;

vector<int> PlusOne(vector<int>&numb) 
{
	for (int i = numb.size() - 1; i >= 0; i--) {
		if (numb[i] < 9) {
			numb[i]++;
			return numb;
		}
		numb[i] = 0;
	}
	numb.insert(numb.begin(), 1);
	return numb;

}

int main() {
	vector<int> numb = { 1,2,3,4,2,1,9 };
	vector<int> result = PlusOne(numb);
	for (auto i : result) {
		cout << i << " ";
	}
	return 0;
}