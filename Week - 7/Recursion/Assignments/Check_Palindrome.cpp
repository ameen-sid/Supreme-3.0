#include<bits/stdc++.h>
using namespace std;

bool solve(string str, int start, int end) {

	// base case
	if (start > end)	return true;

	// processing
	if (str[start] != str[end])	return false;
	// recursive call
	return solve(str, start + 1, end - 1);
}

bool isPalindrome(string str) {

	int start = 0, end = str.size() - 1;
	return solve(str, start, end);
}

int main() {
	string str = "racecar";

	cout << isPalindrome(str) << endl;

	return 0;
}