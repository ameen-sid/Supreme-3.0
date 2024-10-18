#include<bits/stdc++.h>
using namespace std;

// LeetCode

void solve(vector< vector<int> >& mat, int& target, int sum, int row, int& mini) {

	// base case
	if (row == mat.size()) {

		mini = min(mini, abs(target - sum));
		return;
	}

	// processing
	// int ans = INT_MAX;
	for (int col = 0; col < mat[0].size(); col++) {

		// recursive call
		// int recAns = solve(mat, target, sum + mat[row][col], row + 1);
		// ans = min(ans, recAns);
		solve(mat, target, sum + mat[row][col], row + 1, mini);
	}

	// return ans;
}

int minimizeTheDifference(vector< vector<int> >& mat, int target) {

	// int sum = 0, row = 0;
	// return solve(mat, target, sum, row);

	int sum = 0, row = 0, mini = INT_MAX;
	solve(mat, target, sum, row, mini);
	return mini;
}

int main() {
	vector< vector<int> > mat{
		{2, 1, 3},
		{4, 5, 6},
		{8, 9, 7}
	};
	int target = 13;

	cout << minimizeTheDifference(mat, target) << endl;

	return 0;
}