// Debug the code.

#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n) {

	vector<bool> prime(n + 1, true);
	prime[0] = prime[1] = false;

	for (int p = 2; p * p <= n; p++) {
		for (int i = p * p; i <= n; i += p)
			prime[i] = false;
	}

	for (int p = 0; p <= n; p++)
		if (prime[p])	cout << p << " ";
}

int main() {
	int n = 50;

	SieveOfEratosthenes(n);

	return 0;
}