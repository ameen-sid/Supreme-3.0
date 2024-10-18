#include<bits/stdc++.h>
using namespace std;

// LeetCode

int solve(vector< vector<int> >& triangle, int row, int col, int des) {

	// base case
	if (row == des)	return triangle[row][col];

	int leftCall = solve(triangle, row + 1, col, des);
	int rightCall = solve(triangle, row + 1, col + 1, des);
	int minPath = triangle[row][col] + min(leftCall, rightCall);

	return minPath;
}

int minimumTotal(vector< vector<int> >& triangle) {

	int row = 0, col = 0;
	return solve(triangle, row, col, triangle.size() - 1);
}

int main() {
	vector< vector<int> > triangle{
		{2},
		{3, 4},
		{6, 5, 7},
		{4, 1, 8, 3}
	};

	cout << minimumTotal(triangle) << endl;

	return 0;
}