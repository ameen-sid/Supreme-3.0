#include<bits/stdc++.h>
using namespace std;

string solve(string str, int start, int end) {

	// base case
	if (start >= end)	return str;

	swap(str[start], str[end]);
	// recursive call
	return solve(str, start + 1, end - 1);
}

string reverseString(string str) {

	int start = 0, end = str.size() - 1;
	return solve(str, start, end);
}

int main() {
	string str = "archengel";

	cout << reverseString(str) << endl;

	return 0;
}