#include<bits/stdc++.h>
using namespace std;

// GFG

int gcd(int a, int b) {

	if (a == 0)	return b;
	if (b == 0)	return a;

	while (a > 0 && b > 0) {

		if (a > b)	a = a - b;
		else	b = b - a;
	}

	return a == 0 ? b : a;
}

int main() {
	int a = 72, b = 24;

	cout << gcd(a, b) << endl;

	return 0;
}