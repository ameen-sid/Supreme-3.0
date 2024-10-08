#include<bits/stdc++.h>
using namespace std;

vector<bool> Sieve(int n) {

	// create a sieve array of n size telling isPrime
	vector<bool> sieve(n + 1, true);
	sieve[0] = sieve[1] = false;

	for (int i = 2; i * i <= n; i++) {	// Optimisation 2: 

		if (sieve[i] == true) {

			// int j = i * 2;
			int j = i * i;	// Optimisation 1: first unmarked number would be i*i, as others have been marked by 2 to i-1
			while (j <= n) {

				sieve[j] = false;
				j += i;
			}
		}
	}

	return sieve;
}

vector<bool> segSieve(int L, int R) {

	// get me prime array, i will use it to mark seg. sieve
	vector<bool> sieve = Sieve(sqrt(R));
	vector<int> basePrimes;

	for (int i = 0; i < sieve.size(); i++) {
		if (sieve[i])
			basePrimes.push_back(i);
	}

	vector<bool> segSieve(R - L + 1, true);
	if (L == 0 || L == 1)	segSieve[1] = false;

	for (auto prime : basePrimes) {

		int first_mul = (L / prime) * prime;
		if (first_mul < L)	first_mul += prime;

		int j = max(first_mul, prime * prime);
		while (j <= R) {

			segSieve[j - L] = false;
			j += prime;
		}
	}

	return segSieve;
}

int main() {
	int l = 110, r = 130;
	vector<bool> seg_sieve = segSieve(l, r);

	for (int i = 0; i < seg_sieve.size(); i++) {
		if (seg_sieve[i])
			cout << i + l << " ";
	}
	cout << endl;

	return 0;
}