#include<bits/stdc++.h>
using namespace std;

// LeetCode

bool isPalindrome(string& s, int i, int j) {

	while (i < j) {
		if (s[i] != s[j])	return false;
		i++;
		j--;
	}
	return true;
}

string expandAroundCenter(string s, int i, int j) {

	string ans;
	while (i >= 0 && j < s.length() && isPalindrome(s, i, j)) {
		i--;
		j++;
	}

	ans = s.substr(i + 1, j - i - 1);
	return ans;
}

string longestPalindrome(string s) {

	string ans;
	for (int center = 0; center < s.size(); center++) {

		// odd
		int i = center;
		int j = center;
		ans = expandAroundCenter(s, i, j).size() > ans.size() ? expandAroundCenter(s, i, j) : ans;

		// even
		i = center;
		j = center + 1;
		ans = expandAroundCenter(s, i, j).size() > ans.size() ? expandAroundCenter(s, i, j) : ans;
	}

	return ans;
}

string longestPalindrome2(string s) {

	string ans;
	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < s.size(); j++) {
			if (isPalindrome(s, i, j)) {
				string t = s.substr(i, j - i + 1);
				ans = t.size() > ans.size() ? t : ans;
			}
		}
	}
	return ans;
}

int main() {
	string str = "babad";

	cout << longestPalindrome(str) << endl;	// O(N^3)
	// cout << longestPalindrome2(str) << endl;	// O(N^3)

	return 0;
}