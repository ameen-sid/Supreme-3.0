#include<bits/stdc++.h>
using namespace std;

// LeetCode

string removeDuplicates(string s) {

	string ans = "";
	int len = s.length();
	for (int i = 0; i < len; i++) {

		char currChar = s[i];
		if (ans.empty() || currChar != ans.back())
			ans.push_back(currChar);
		else if (currChar == ans.back())
			ans.pop_back();
	}

	return ans;
}

int main() {
	string s = "abbaca";

	cout << removeDuplicates(s);	// TC: O(N)

	return 0;
}