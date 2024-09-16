#include<bits/stdc++.h>
using namespace std;

// LeetCode

string longestCommonPrefix(vector<string>& strs) {

	string ans;

	int i = 0;
	while (true) {

		char currChar = 0;
		for (auto str : strs) {

			if (i >= str.size()) {

				// out of bound
				currChar = 0;
				break;
			}

			// just started
			if (currChar == 0)
				currChar = str[i];
			else if (str[i] != currChar) {

				currChar = 0;
				break;
			}
		}

		if (currChar == 0)	break;

		ans.push_back(currChar);
		i++;
	}

	return ans;
}

int main() {
	vector<string> strs{ "flower", "flow", "flight" };

	cout << longestCommonPrefix(strs) << endl;
	return 0;
}