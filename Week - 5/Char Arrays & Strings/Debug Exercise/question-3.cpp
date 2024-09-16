// Debug the code. Add two binary numbers.

#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {

	int i = a.length() - 1;
	int j = b.length() - 1;

	string ans;
	int carry = 0;
	while (i >= 0 || j >= 0 || carry) {

		if (i >= 0)
			carry += a[i--] - '0';
		if (j >= 0)
			carry += b[j--] - '0';

		ans += carry % 2 + '0';
		carry /= 2;
	}

	reverse(ans.begin(), ans.end());

	return ans;
}

int main() {
	string a = "101", b = "1001";

	cout << addBinary(a, b) << endl;

	return 0;
}