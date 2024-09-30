#include<bits/stdc++.h>
using namespace std;

// LeetCode

// Segmented Sieve

// Sieve of Eratosthenes
int countPrimes(int n) {

	if (n == 0)	return 0;

	vector<bool> prime(n, true);
	prime[0] = prime[1] = false;

	int count = 0;
	for (int i = 2; i < n; i++) {

		if (prime[i]) {

			count++;
			int j = 2 * i;
			while (j < n) {

				prime[j] = false;
				j += i;
			}
		}
	}

	return count;
}

bool isPrime2(int n) {

	if (n <= 1)	return false;

	int sqrtN = sqrt(n);
	for (int i = 2; i < sqrtN; i++) {
		if (n % i == 0)	return false;
	}

	return true;
}

bool isPrime(int n) {

	if (n <= 1)	return false;

	for (int i = 2; i < n; i++) {
		if (n % i == 0)	return false;
	}

	return true;
}

int countPrimes2(int n) {

	int count = 0;
	for (int i = 0; i < n; i++) {

		// if (isPrime(i))	// TC: O(N)
		if (isPrime(i))		// TC: O(sqrt(N))
			count++;
	}

	return count;
}

int main() {
	int n = 10;

	// cout << countPrimes(n) << endl;	// TC: O(N^2)
	// cout << countPrimes(n) << endl;	// TC: O(N * sqrt(N))
	cout << countPrimes(n) << endl;	// TC: O(N * log(log(N)))

	return 0;
}