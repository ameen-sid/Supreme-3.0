#include<bits/stdc++.h>
using namespace std;

// LeetCode

string reorganizeString(string s) {

	int hash[26] = { 0 };
	for (int i = 0; i < s.size(); i++)
		hash[s[i] - 'a']++;

	// find the most frequent char
	char mostFreqChar;
	int max = INT16_MIN;
	for (int i = 0; i < 26; i++) {

		if (hash[i] > max) {
			max = hash[i];
			mostFreqChar = 'a' + i;
		}
	}

	int index = 0;
	while (max > 0 && index < s.size()) {

		s[index] = mostFreqChar;
		max--;
		index += 2;
	}

	if (max != 0)	return "";

	hash[mostFreqChar - 'a'] = 0;

	// let's place the rest of the chars
	for (int i = 0; i < 26; i++) {

		while (hash[i] > 0) {

			index = index >= s.size() ? 1 : index;
			s[index] = i + 'a';
			hash[i]--;
			index += 2;
		}
	}

	return s;
}

int main() {
	string str = "aab";

	cout << reorganizeString(str) << endl;	// O(N)

	return 0;
}