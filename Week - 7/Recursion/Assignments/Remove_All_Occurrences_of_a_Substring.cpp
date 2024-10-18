#include<bits/stdc++.h>
using namespace std;

// LeetCode

// Lakshay Bhaiya's Approach
void solve(string& s, string& part) {

	int found = s.find(part);
	if (found != string::npos) {

		// part string has been located
		// remove it
		string leftPart = s.substr(0, found);
		string rightPart = s.substr(found + part.length(), s.length());
		s = leftPart + rightPart;

		solve(s, part);
	}

	return;
}

string removeOccurrences(string s, string part) {

	// My Approach 
	// base case
	if (s.find(part) == string::npos)	return s;

	// edge case
	if (s == part)	return "";

	// processing
	if (s.find(part) != string::npos)
		// recursive call
		return removeOccurrences(s.erase(s.find(part), part.size()), part);

	// // Lakshay Bhaiya's Approach
	// solve(s, part);
	// return s;
}

int main() {
	string str = "daabcbaabcbc", part = "abc";

	cout << removeOccurrences(str, part) << endl;

	return 0;
}