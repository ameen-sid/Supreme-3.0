#include<bits/stdc++.h>
using namespace std;

// LeetCode

int MOD = 10 ^ 9 + 7;

// Lakshay Bhaiya's Approach
int solve2(int n, int k, int target) {

	// base case
	if (target < 0)	return 0;
	if (n == 0 && target == 0)	return 1;
	if (n == 0 && target != 0)	return 0;
	if (n != 0 && target == 0)	return 0;

	// processing
	int ans = 0;
	for (int i = 1; i <= k; i++) {

		// recursive call
		ans += solve2(n - 1, k, target - i);
	}

	return ans;
}

int solve(int n, int k, int target, int ans = 0) {

	// base case
	if (n == 0)	return 0;

	// processing
	int sum = 0;
	for (int i = 1; i <= k; i++) {

		int value = ans + i;
		if (value == target)	sum++;

		sum += solve(n - 1, k, target, value);
	}

	return sum % MOD;
}

int numRollsToTarget(int n, int k, int target) {
	return solve(n, k, target, 0);
}

int main() {
	int n = 3;
	int k = 2;
	int target = 6;

	cout << numRollsToTarget(n, k, target) << endl;

	return 0;
}