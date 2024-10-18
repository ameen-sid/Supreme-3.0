#include<bits/stdc++.h>
using namespace std;

// LeetCode

void storeSubsequences(string str, int index, string output, vector<string>& ans) {

	// base case
	if (index >= str.length()) {

		ans.push_back(output);
		return;
	}

	// 1 case khud solve karunga
	char ch = str[index];
	// include
	storeSubsequences(str, index + 1, output + ch, ans);
	// exclude
	storeSubsequences(str, index + 1, output, ans);
}

int main() {
	string str = "abc", output = "";
	int index = 0;

	vector<string> ans;

	storeSubsequences(str, index, output, ans);

	cout << ans.size() << endl;
	for (auto s : ans)	cout << s << endl;

	return 0;
}