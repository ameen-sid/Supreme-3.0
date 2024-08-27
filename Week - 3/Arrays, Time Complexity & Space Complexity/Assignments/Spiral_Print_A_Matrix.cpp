#include<iostream>
#include<vector>
using namespace std;

// LeetCode

vector<int> spiralOrder(vector< vector<int> >& matrix) {

	vector<int> ans;

	int m = matrix.size();
	int n = matrix[0].size();

	int totalElements = m * n;

	int startingRow = 0;
	int endingCol = n - 1;
	int endingRow = m - 1;
	int startingCol = 0;

	int count = 0;
	while (count < totalElements) {

		// printing starting row:
		for (int i = startingCol; i <= endingCol && count < totalElements; i++) {
			ans.push_back(matrix[startingRow][i]);
			count++;
		}
		startingRow++;

		// printing ending col:
		for (int i = startingRow; i <= endingRow && count < totalElements; i++) {
			ans.push_back(matrix[i][endingCol]);
			count++;
		}
		endingCol--;

		// printing ending row:
		for (int i = endingCol; i >= startingCol && count < totalElements; i--) {
			ans.push_back(matrix[endingRow][i]);
			count++;
		}
		endingRow--;

		// printing starting col:
		for (int i = endingRow; i >= startingRow && count < totalElements; i--) {
			ans.push_back(matrix[i][startingCol]);
			count++;
		}
		startingCol++;
	}
	return ans;
}

int main() {
	vector< vector<int> > matrix{
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 10, 11, 12},
		{13, 14, 15, 16, 17, 18},
		{19, 20, 21, 22, 23, 24},
		{25, 26, 27, 28, 29, 30}
	};

	vector<int> ans = spiralOrder(matrix);	// TC: O(N^2)

	cout << "Spiral Print: ";
	for (int i : ans)
		cout << i << " ";
	cout << endl;

	return 0;
}