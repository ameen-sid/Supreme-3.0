#include<bits/stdc++.h>
using namespace std;

// right to left
int solve(string str, char ch, int end) {

	// base case
	if (str[end] == ch)	return end;
	if (end < 0)	return -1;

	// recursive call
	return solve(str, ch, end - 1);
}

// left to right
int solvelr(string str, char ch, int index) {

	// base case
	if (index >= str.size())	return -1;

	int ans = -1;
	if (str[index] == ch)	ans = index;
	return max(ans, solvelr(str, ch, index + 1));
}

int lastOccurrence(string str, char ch) {

	// right to left
	// int end = str.size() - 1;
	// return solve(str, ch, end);

	// left to right
	int index = 0;
	return solvelr(str, ch, index);
}

int main() {
	string str = "sandghdkhsdlrs";
	char ch = 's';

	cout << lastOccurrence(str, ch) << endl;

	return 0;
}