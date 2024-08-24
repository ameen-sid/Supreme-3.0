#include<iostream>
#include <climits>
using namespace std;

// LeetCode

int reverse(int x) {

	if (x <= INT_MIN)
		return 0;

	int ans = 0;
	bool isNegative = false;

	if (x < 0) {
		isNegative = true;
		x = x * -1;
	}

	while (x > 0) {

		if (ans > INT_MAX / 10)
			return 0;

		int rem = x % 10;
		ans = (ans * 10) + rem;
		x /= 10;
	}

	return isNegative ? -ans : ans;
}

int main() {
	int n;

	cout << "Enter any no: ";
	cin >> n;

	cout << "The Reverse is: " << reverse(n) << endl;

	return 0;
}