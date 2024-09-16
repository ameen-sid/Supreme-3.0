#include<bits/stdc++.h>
using namespace std;

// LeetCode

void normalise(string& str) {

	unordered_map<char, char> mapping;
	char start = 'a';

	for (int i = 0; i < str.length(); i++) {

		char strChar = str[i];
		if (mapping.find(strChar) == mapping.end()) {
			// if mapping pehle se present nhi hai
			// then create and move ahead
			mapping[strChar] = start;
			start++;
		}
	}

	// mapping has done
	// string ko update normalise kardo using mapping
	for (int i = 0; i < str.length(); i++) {

		char mappedChar = mapping[str[i]];
		str[i] = mappedChar;
	}
	// toh ab hamne string ko normalise update krdiya
}

bool isIsomorphic(string s, string t) {

	// Love Bhaiya's Approach
	normalise(s);
	normalise(t);

	for (int i = 0; i < s.size(); i++)
		if (s[i] != t[i]) return false;

	return true;
}

bool isIsomorphic2(string s, string t) {

	// Lakshya Bhaiya's Approach
	int hash[256] = { 0 };	// mapping of each char of language 's' to language 't'
	bool isTCharsMapped[256] = { 0 };	// stores if t[i] char already mapped with s[i]

	for (int i = 0; i < s.size(); i++) {

		if (hash[s[i]] == 0 && isTCharsMapped[t[i]] == 0) {
			hash[s[i]] = t[i];
			isTCharsMapped[t[i]] = true;
		}
	}

	for (int i = 0; i < s.size(); i++) {

		if (hash[s[i]] != t[i])
			return false;
	}

	return true;
}

int main() {
	string s = "title";
	string t = "paper";

	// cout << boolalpha << isIsomorphic2(s, t) << endl;	// O(N)
	cout << boolalpha << isIsomorphic(s, t) << endl;	// O(N)

	return 0;
}