#include<bits/stdc++.h>
using namespace std;

// LeetCode

int expandAroundCenter(string s, int i, int j) {

	int count = 0;
	while (i >= 0 && j < s.length() && s[i] == s[j]) {

		count++;
		i--;
		j++;
	}

	return count;
}

int countSubstrings(string s) {

	int totalCount = 0;
	for (int center = 0; center < s.length(); center++) {

		// odd
		int i = center;
		int j = center;
		int oddPalSubstrCount = expandAroundCenter(s, i, j);

		// even
		i = center;
		j = center + 1;
		int evenPalSubstrCount = expandAroundCenter(s, i, j);

		totalCount += oddPalSubstrCount + evenPalSubstrCount;
	}

	return totalCount;
}

int main() {
	string s = "abc";

	cout << countSubstrings(s) << endl;

	return 0;
}