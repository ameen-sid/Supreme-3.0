// Debug the code. Sort vowels in a string. Characters are alphabets.

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {

	ch = toupper(ch);
	return (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string sortVowels(string s) {

	vector<char> vowel;
	for (auto ch : s) {

		if (isVowel(ch))	vowel.push_back(ch);
	}

	// Edge Case
	if (vowel.size() == 0) return s;

	sort(vowel.begin(), vowel.end());

	for (int i = 0; i < vowel.size(); i++) {
		s[i] = vowel[i];
	}

	return s;
}

int main() {
	string str = "happy holiday";

	cout << sortVowels(str) << endl;

	return 0;
}