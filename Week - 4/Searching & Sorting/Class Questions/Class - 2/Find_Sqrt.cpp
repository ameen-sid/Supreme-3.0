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

int main() {
	int x = 8;

	cout << "Sqrt of " << x << " is: " << mySqrt(x) << endl;

	return 0;
}