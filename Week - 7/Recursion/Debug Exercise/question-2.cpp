// Debug the code.

#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {

	int p = abs(n);
	double ans = 1.0;
	while (p >= 1) {
		if (p % 2 == 1)	ans *= x;
		p /= 2;
		x *= x;
	}
	return n < 0 ? 1 / ans : ans;
}

int main() {
	double x = 2.0;
	int n = 3;

	cout << myPow(x, n) << endl;

	return 0;
}