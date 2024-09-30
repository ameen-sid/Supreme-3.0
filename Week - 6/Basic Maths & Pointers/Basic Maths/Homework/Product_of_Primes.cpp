#include<bits/stdc++.h>
using namespace std;

// GFG
// TODO: Error In Some Testcases
void fillPrimes(vector<int>& prime, int high) {

	vector<bool> ck(high + 1, true);
	for (int i = 2; (i * i) <= high; i++) {

		if (ck[i] == true) {

			for (int j = i * i; j <= high; j = j + i) {
				ck[j] = false;
			}
		}
	}

	for (int i = 2; i * i <= high; i++) {
		if (ck[i] == true) {
			prime.push_back(i);
		}
	}
}

vector<int> segmentedSieve(long long low, long long high) {

	if (low < 2 && high >= 2)	low = 2;

	vector<bool> prime(high - low + 1, true);
	vector<int> chprime;

	fillPrimes(chprime, high);
	for (int i : chprime) {

		int lower = (low / i);
		if (lower <= 1) {
			lower = i + i;
		}
		else if (low % i) {
			lower = (lower * i) + i;
		}
		else {
			lower = (lower * i);
		}

		for (int j = lower; j <= high; j = j + i) {
			prime[j] = false;
		}
	}

	vector<int> ans;
	for (int i = low; i <= high; i++) {

		if (prime[i] == true) {
			ans.push_back(i);
		}
	}

	return ans;
}

long long primeProduct(long long L, long long R) {

	vector<int> seg_sieve = segmentedSieve(L, R);

	long long ans = 1;
	for (auto seg : seg_sieve)
		ans *= seg;

	return ans;
}

int main() {
	int l = 1, r = 10;

	cout << primeProduct(l, r) << endl;

	return 0;
}