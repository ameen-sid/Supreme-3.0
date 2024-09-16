#include<bits/stdc++.h>
using namespace std;

// LeetCode

int myAtoi(string s) {

	int num = 0, i = 0, sign = 1;

	// skip the leading spaces
	while (s[i] == ' ')	i++;

	// check the sign
	if (i < s.size() && (s[i] == '-' || s[i] == '+')) {

		sign = s[i] == '+' ? 1 : -1;
		i++;
	}

	// convert the string into integer
	while (i < s.size() && isdigit(s[i])) {

		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
			return sign == -1 ? INT_MIN : INT_MAX;

		num = num * 10 + (s[i] - '0');
		i++;
	}

	return num * sign;
}

int main() {
	string str = "   -2345hello834";

	cout << myAtoi(str) << endl;	// O(N)

	return 0;
}