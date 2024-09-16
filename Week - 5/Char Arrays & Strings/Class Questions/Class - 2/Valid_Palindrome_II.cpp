#include<bits/stdc++.h>
using namespace std;

// LeetCode

bool isPalindrome(string str, int s, int e) {

	while (s <= e) {

		if (str[s] != str[e])
			return false;

		s++;
		e--;
	}

	return true;
}

bool validPalindrome(string s) {

	int len = s.length();
	int i = 0, j = len - 1;
	while (i <= j) {

		if (s[i] == s[j]) {
			i++;
			j--;
		}
		else {
			bool ansOne = isPalindrome(s, i + 1, j);
			bool ansTwo = isPalindrome(s, i, j - 1);

			return ansOne || ansTwo;
		}
	}

	// valid palindrome without any deletion
	return true;
}

int main() {
	string str = "abca";

	if (validPalindrome(str))
		cout << "Valid Palindrome" << endl;
	else
		cout << "Not a valid Palindrome" << endl;

	return 0;
}