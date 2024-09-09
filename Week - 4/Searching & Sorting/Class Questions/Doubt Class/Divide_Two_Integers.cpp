#include<iostream>
using namespace std;

// LeetCode

double divide(int dividendx, int divisorx) {

	if (dividendx == INT16_MIN && divisorx == -1)
		return INT16_MAX;

	bool ansPosSign = true;	// kya final answer positive hai
	if (dividendx < 0 && divisorx > 0 || dividendx > 0 && divisorx < 0)
		ansPosSign = false;

	// now i can divide with BS using only pos number
	double dividend = abs(dividendx);
	double divisor = abs(divisorx);

	double ans = 0;

	double start = 0;
	double end = dividend;
	while (end - start > 0.000000001) {

		double mid = start + (end - start) / (double)2;
		if (mid * divisor <= dividend) {
			ans = mid;
			start = mid;
		}
		else
			end = mid;
	}

	return ansPosSign ? ans : -ans;
}

int main() {
	int dividend = 10;
	int divisor = 3;

	printf("Ans: %0.9f", divide(dividend, divisor));

	return 0;
}