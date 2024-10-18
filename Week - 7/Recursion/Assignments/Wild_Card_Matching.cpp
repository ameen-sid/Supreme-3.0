#include<bits/stdc++.h>
using namespace std;

// LeetCode

bool isMatchHelper(string& s, int si, string& p, int pi) {

	// base case
	if (si == s.length() && pi == p.length())	return true;
	if (si == s.length() && pi < p.length()) {

		while (pi < p.length()) {

			if (p[pi] != '*')	return false;
			pi++;
		}

		return true;
	}

	// processing
	// single char matching
	if (s[si] == p[pi] || '?' == p[pi])	return isMatchHelper(s, si + 1, p, pi + 1);

	if (p[pi] == '*') {

		// treat astric '*' as empty or null
		bool caseA = isMatchHelper(s, si, p, pi + 1);

		// let astric '*' consume 1 char
		bool caseB = isMatchHelper(s, si + 1, p, pi);

		return caseA || caseB;
	}

	// char doesn't match
	return false;
}

bool isMatch(string s, string p) {

	int si = 0;	// pointer index for s string
	int pi = 0;	// pointer index for p string

	return isMatchHelper(s, si, p, pi);
}

int main() {
	string s = "abcdefg";
	string p = "ab*fg";

	cout << isMatch(s, p) << endl;

	return 0;
}