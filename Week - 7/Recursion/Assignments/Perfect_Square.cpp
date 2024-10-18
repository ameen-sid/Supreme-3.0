#include<bits/stdc++.h>
using namespace std;

// LeetCode

int numSquareHelper(int n) {

	// base case
	if (n == 0)	return 1;
	if (n < 0) return 0;

	// processing
	int ans = INT_MAX;
	int i = 1;
	int end = sqrt(n);
	while (i <= end) {

		int perfectSquare = i * i;
		int numberOfPerfectSquares = 1 + numSquareHelper(n - perfectSquare);
		ans = min(ans, numberOfPerfectSquares);
		i++;
	}

	// recursive call
	return ans;
}

int numSquares(int n) {
	return numSquareHelper(n) - 1;
}

int main() {
	int n = 12;

	cout << numSquares(n) << endl;

	return 0;
}