#include<bits/stdc++.h>
using namespace std;

// LeetCode

int solve(string& word1, string& word2, int i, int j) {

	// base case
	if (i >= word1.length()) {
		// word1's string is end
		// it means word1's length may be smaller than word2
		return word2.length() - j;
	}
	if (j >= word2.length()) {
		// word2's string is end
		// it means word1's length may be greater than word2
		return word1.length() - i;
	}

	// processing
	int ans = 0;

	if (word1[i] == word2[j]) {
		// match
		// no operation will perform
		ans = 0 + solve(word1, word2, i + 1, j + 1);
	}
	else {
		// not match
		// perform operations

		// insert operation
		int insert = 1 + solve(word1, word2, i, j + 1);
		// remove operation
		int remove = 1 + solve(word1, word2, i + 1, j);
		// replace operation
		int replace = 1 + solve(word1, word2, i + 1, j + 1);

		ans = min(insert, min(remove, replace));
	}

	return ans;
}

int minDistance(string word1, string word2) {

	int i = 0, j = 0;
	return solve(word1, word2, i, j);
}

int main() {
	string word1 = "horse";
	string word2 = "ros";

	cout << minDistance(word1, word2) << endl;

	return 0;
}