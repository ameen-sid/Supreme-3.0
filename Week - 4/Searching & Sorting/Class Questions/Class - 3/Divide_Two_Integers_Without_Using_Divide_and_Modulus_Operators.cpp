// Given two integers one is a dividend and the other one is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any " / " and " % " operators.

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10 / 2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10 / 3 = 3.33333... which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10 / -2 = -5.

#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor) {

	// search space
	// +ve dividend to -ve dividend

	int ans = -1;
	int start = 0;
	int end = dividend;

	while (start <= end) {

		int mid = start + ((end - start) >> 1);

		if (divisor * mid == dividend)
			return mid;
		else if (divisor * mid < dividend) {
			// store and compute
			ans = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}

	return ans;
}

int main() {
	int dividend = 10;
	int divisor = -2;

	int ans = getQuotient(abs(dividend), abs(divisor));

	if (dividend < 0 && divisor > 0 || dividend > 0 && divisor < 0)
		ans = 0 - ans;

	cout << "Quotient is: " << ans << endl;

	return 0;
}