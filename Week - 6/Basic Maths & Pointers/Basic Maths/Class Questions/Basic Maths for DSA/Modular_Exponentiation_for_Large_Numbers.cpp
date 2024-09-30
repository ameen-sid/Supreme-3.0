#include<bits/stdc++.h>
using namespace std;

// GFG

long long int PowMod(long long int x, long long int n, long long int M) {

	long long int ans = 1;
	while (n > 0) {

		if (n & 1) {
			// odd
			ans = (ans * x) % M;
		}
		x = (x * x) % M;
		n >>= 1;
	}

	return ans % M;
}

int main() {
	int x = 3, n = 2, m = 4;

	cout << PowMod(x, n, m) << endl;

	return 0;
}