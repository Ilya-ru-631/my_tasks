#include <iostream>
#include <vector>
using namespace std;

int step(int x){
	if (x <= 2) return x;
	int prev1 = 1;
	int prev2 = 2;
	int cur = 0;
	for (int i = 3; i <= x; i++) {
		cur = prev1 + prev2;
		prev1 = prev2;
		prev2 = cur;
	}
	return cur;
}
int main() {
	cout << step(5);
	return 0;
}