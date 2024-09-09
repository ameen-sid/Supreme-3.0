#include<iostream>
using namespace std;

// LeetCode

int mySqrt(int x) {

	int ans = 0;

	int start = 0;
	int end = x;
	while (start <= end) {

		long long int mid = start + (end - start) / 2;

		long long int product = mid * mid;
		if (product == x)
			return x;
		else if (product < x) {
			ans = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	return ans;
}

double myPrecisionSqrt(int n) {

	double sqrt = (double)mySqrt(n);

	int precision = 13;
	double step = 0.1;
	while (precision--) {

		double j = sqrt;
		while (j * j <= n) {
			// store and compute
			sqrt = j;
			j += step;
		}
		// after this loop i got 1 precision answer
		step /= 10;
	}
	return sqrt;
}

double mySqrtWithPrecision(int n) {

	double ans = 0;
	double start = 0;
	double end = n;
	while (end - start > 0.000000001) {

		double mid = start + (end - start) / 2;
		double sqr = mid * mid;

		if (sqr <= n) {
			ans = mid;
			start = mid;
		}
		else {
			end = mid;
		}
	}
	return ans;
}

int main() {
	int x = 63;

	// cout << "Sqrt of " << x << " is: " << myPrecisionSqrt(x) << endl;
	// printf("Precision Sqrt: %0.13f", myPrecisionSqrt(x));	// TC: O(LogN) + O(Precision)

	printf("Precision Sqrt: %0.9f", mySqrtWithPrecision(x));	// TC: O(LogN)


	return 0;
}