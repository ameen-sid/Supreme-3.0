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

int main() {
	vector<bool> sieve = Sieve(25);	// TC: O(N loglogN)

	for (int i = 0; i <= 25; i++) {
		if (sieve[i])	cout << i << " ";
	}
	cout << endl;

	return 0;
}