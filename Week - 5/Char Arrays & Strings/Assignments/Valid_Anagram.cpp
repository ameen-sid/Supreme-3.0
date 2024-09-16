#include<bits/stdc++.h>
using namespace std;

// LeetCode

bool isAnagram(string s, string t) {

	// Counting Approach --> Frequency Table
	int freqTable[256] = { 0 };

	for (int i = 0; i < s.size(); i++)
		freqTable[s[i]]++;

	for (int i = 0; i < t.size(); i++)
		freqTable[t[i]]--;

	for (int i = 0; i < 256; i++) {
		if (freqTable[i] != 0)	return false;
	}

	return true;
}

bool isAnagram2(string s, string t) {

	// Sorting Method
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	if (s == t)	return true;
	return false;
}

int main() {
	string s = "anagram";
	string t = "nagaram";

	// if (isAnagram2(s, t))	// O(NlogN + MlogM)
	if (isAnagram(s, t))	// O(N + M)
		cout << "Valid Anagram";
	else
		cout << "Invalid Anagram";

	return 0;
}