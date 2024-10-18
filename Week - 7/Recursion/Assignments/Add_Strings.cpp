#include<bits/stdc++.h>
using namespace std;

// LeetCode

void solve(string& ans, string& num1, string& num2, int n1, int n2, int& carry) {

	// base case
	if (n1 < 0 && n2 < 0)	return;
	if (n1 < 0) {
		// while (n2 >= 0)	ans.push_back(((num2[n2--] - '0') + carry) + '0');
		int num = 0 + (num2[n2] - '0') + carry;
		carry = num / 10;
		num = num % 10;

		ans.push_back(num + '0');
		solve(ans, num1, num2, n1, n2 - 1, carry);
		while (carry) {
			ans.push_back(carry + '0');
			carry /= 10;
		}
		return;
	}
	else if (n2 < 0) {
		// while (n1 >= 0) ans.push_back(((num1[n1--] - '0') + carry) + '0');
		int num = (num1[n1] - '0') + 0 + carry;
		carry = num / 10;
		num = num % 10;

		ans.push_back(num + '0');
		solve(ans, num1, num2, n1 - 1, n2, carry);
		while (carry) {
			ans.push_back(carry + '0');
			carry /= 10;
		}
		return;
	}

	// processing
	int num = (num1[n1] - '0') + (num2[n2] - '0') + carry;
	carry = num / 10;
	num = num % 10;

	ans.push_back(num + '0');
	// recursive call
	solve(ans, num1, num2, n1 - 1, n2 - 1, carry);
	while (carry) {
		ans.push_back(carry + '0');
		carry /= 10;
	}
}

// Lakshay Bhaiya's Approach
void addRe(string& num1, int p1, string& num2, int p2, int carry, string& ans) {

	// base case
	if (p1 < 0 && p2 < 0) {

		if (carry != 0)	ans.push_back(carry + '0');
		return;
	}

	// ek case solve
	int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
	int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
	int csum = n1 + n2 + carry;
	int digit = csum % 10;
	carry = csum / 10;
	ans.push_back(digit + '0');

	// RE
	addRe(num1, p1 - 1, num2, p2 - 1, carry, ans);
}

string addStrings(string num1, string num2) {

	// My Approach
	int n1 = num1.length() - 1;
	int n2 = num2.length() - 1;
	int carry = 0;
	string ans;

	solve(ans, num1, num2, n1, n2, carry);
	reverse(ans.begin(), ans.end());

	return ans;

	// Lakshay Bhaiya's Approach
	// string ans = "";
	// addRe(num1, num1.size(), num2, num2.size(), 0, ans);
	// reverse(ans.begin(), ans.end());
	// return ans;
}

int main() {
	string num1 = "999";
	string num2 = "999";

	cout << addStrings(num1, num2) << endl;

	return 0;
}