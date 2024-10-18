#include<bits/stdc++.h>
using namespace std;

// LeetCode

int solve(vector< vector<char> >& matrix, int i, int j, int row, int col, int& maxi) {

	// base case
	if (i >= row || j >= col)	return 0;

	// processing
	// explore all 3 directions
	int right = solve(matrix, i, j + 1, row, col, maxi);
	int diagonal = solve(matrix, i + 1, j + 1, row, col, maxi);
	int down = solve(matrix, i + 1, j, row, col, maxi);

	// check can we build square from current position
	if (matrix[i][j] == '1') {
		int ans = 1 + min(right, min(diagonal, down));
		// this is important
		maxi = max(maxi, ans);
		return ans;
	}
	else {
		// if you stand on 0, then the answer will be 0
		return 0;
	}
}

int maximalSquare(vector< vector<char> >& matrix) {

	int i = 0, j = 0;
	int row = matrix.size(), col = matrix[0].size();
	int maxi = 0;

	int ans = solve(matrix, i, j, row, col, maxi);

	return maxi * maxi;
}

int main() {
	vector< vector<char> > matrix{
		{'1', '0', '1', '0', '0'},
		{'1', '0', '1', '1', '1'},
		{'1', '1', '1', '1', '1'},
		{'1', '0', '0', '1', '0'}
	};

	cout << maximalSquare(matrix) << endl;

	return 0;
}