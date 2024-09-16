// Debug the code. String to Integer

#include<bits/stdc++.h>
using namespace std;

int mystoi(string s) {

	int len = s.size();

	double num = 0;
	int i = 0;

	// remove spaces
	while (s[i] == ' ')	i++;

	// remove negative sign
	bool negative = s[i] == '-';
	negative == true ? i++ : i;

	// convert the numbers
	while (i < len && s[i] >= '0' && s[i] <= '9') {

		num = num * 10 + (s[i] - '0');
		i++;
	}

	// convert the sign of the number
	num = negative ? -num : num;

	num = (num > INT_MAX) ? INT_MAX : num;
	num = (num < INT_MIN) ? INT_MIN : num;

	return num;
}

int main() {
	string num = "   -98937483he89";

	cout << mystoi(num) << endl;

	return 0;
}