#include<bits/stdc++.h>
using namespace std;

// LeetCode

string removeDuplicates(string s, int k) {

	// Two Pointer Approach
	vector<int> count(s.size());

	int i = 0, j = 0;
	while (j < s.size()) {

		s[i] = s[j];
		count[i] = 1;
		if (i > 0 && s[i] == s[i - 1])	count[i] += count[i - 1];
		if (count[i] == k)	i -= k;

		i++;
		j++;
	}

	return s.substr(0, i);
}

bool areLastKMinus1CharSame(string& ans, char& newCh, int kMinus1) {

	int it = ans.size() - 1;
	for (int i = 0; i < kMinus1; i++) {

		if (newCh != ans[it])	return false;
		it--;
	}

	return true;
}

string removeDuplicates2(string s, int k) {

	string ans;
	for (int i = 0; i < s.size(); i++) {

		char& newCh = s[i];
		if (ans.size() < k - 1)	ans.push_back(s[i]);
		else {

			if (areLastKMinus1CharSame(ans, newCh, k - 1)) {
				for (int j = 0; j < k - 1; j++)	ans.pop_back();
			}
			else	ans.push_back(newCh);
		}
	}

	return ans;
}

int main() {
	string str = "deeedbbcccbdaa";
	int k = 3;

	// cout << removeDuplicates2(str, k) << endl;	// O(N * K)
	cout << removeDuplicates(str, k) << endl;	// O(N) S.O(N)

	return 0;
}