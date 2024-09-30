#include<bits/stdc++.h>
using namespace std;

int fastExp(int a, int b) {

	int ans = 1;
	while (b > 0) {

		if (b & 1) {
			// odd
			ans = ans * a;
		}
		a = a * a;
		b >>= 1;
	}

	return ans;
}

int slowExp(int a, int b) {

	int ans = 1;
	for (int i = 0; i < b; i++)	ans *= a;
	return ans;
}

int main() {
	int a = 2, b = 10;

	cout << slowExp(a, b) << endl;	// TC: O(b)
	cout << fastExp(a, b) << endl;	// TC: O(log(b))

	return 0;
}