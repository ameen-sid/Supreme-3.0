#include<iostream>
#include<vector>
using namespace std;

// LeetCode

bool searchMatrix(vector< vector<int> >& matrix, int target) {

	int rows = matrix.size();
	int cols = matrix[0].size();
	// total elements
	int n = rows * cols;

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		// mid ka use krke 2d array ka rowsIndex and colsIndex find krenege
		int rowIndex = mid / cols;
		int colIndex = mid % cols;

		if (matrix[rowIndex][colIndex] == target)
			return true;
		else if (target > matrix[rowIndex][colIndex])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return false;
}

int main() {
	vector< vector<int> > matrix{
		{1, 3, 5, 7},
		{10, 11, 16, 20},
		{23, 30, 34, 60}
	};
	int target = 11;

	if (searchMatrix(matrix, target))
		cout << "Element found" << endl;
	else
		cout << "Element not found" << endl;

	return 0;
}