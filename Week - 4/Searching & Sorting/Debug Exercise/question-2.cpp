// Debug the code. Find square root of x.

#include<iostream>
using namespace std;

int mySqrt(int x) {

	if (x == 0)
		return x;

	int first = 1, last = x;
	int ans = -1;
	while (first <= last) {

		int mid = first + (last - first) / 2;
		if (mid * mid <= x) {
			// store and compute
			ans = mid;
			first = mid + 1;
		}
		else
			last = mid - 1;
	}
	return ans;
}

int main() {
	int x = 63;

	cout << mySqrt(x) << endl;

	return 0;
}