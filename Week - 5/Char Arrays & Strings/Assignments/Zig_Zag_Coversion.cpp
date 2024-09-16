#include<bits/stdc++.h>
using namespace std;

// LeetCode

string convert(string s, int numRows) {

	// Edge Case
	if (numRows == 1)	return s;

	vector<string> zigzag(numRows);
	int i = 0, row = 0;
	bool direction = 1;	// 1 -> Top - Bottom

	while (true) {

		if (direction) {

			while (row < numRows && i < s.size())
				zigzag[row++].push_back(s[i++]);
			row = row - 2;
		}
		else {

			while (row >= 0 && i < s.size())
				zigzag[row--].push_back(s[i++]);
			row = 1;
		}

		if (i >= s.size())	break;
		direction = !direction;
	}

	string ans = "";
	for (int i = 0; i < zigzag.size(); i++)
		ans += zigzag[i];

	return ans;
}

int main() {
	string str = "ABCDEFG";
	int numRows = 3;

	cout << convert(str, numRows) << endl;

	return 0;
}