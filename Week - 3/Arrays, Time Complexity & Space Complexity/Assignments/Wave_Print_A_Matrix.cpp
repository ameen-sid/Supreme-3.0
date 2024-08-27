#include<iostream>
#include<vector>
using namespace std;

void waveOrder(vector< vector<int> >& matrix) {

	int rows = matrix.size();
	int cols = matrix[0].size();

	for (int i = 0; i < cols; i++) {

		// for even no of cols --> top to bottom:
		if (i & 1 == 0) {
			for (int j = 0; j < rows; j++)
				cout << matrix[j][i] << " ";
		}
		// for odd no of cols --> bottom to top
		else {
			for (int j = rows - 1; j >= 0; j--)
				cout << matrix[j][i] << " ";
		}
	}
}

int main() {
	vector< vector<int> > matrix{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	waveOrder(matrix);

	return 0;
}