#include<bits/stdc++.h>
using namespace std;

// LeetCode

string removeOccurrences(string s, string part) {

	while (s.find(part) != string::npos)
		s.erase(s.find(part), part.length());

	return s;
}

int main() {
	string str = "daabcbaabcbc";
	string pattern = "abc";

	cout << removeOccurrences(str, pattern) << endl;	// TC: O(N/K * (N-K))

	return 0;
}