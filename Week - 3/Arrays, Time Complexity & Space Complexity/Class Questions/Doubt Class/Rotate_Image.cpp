#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// LeetCode

void rotate(vector< vector<int> >& image) {

	int nrows = image.size();
	int ncols = image[0].size();

	// step 1: transpose
	for (int i = 0; i < nrows; i++) {
		for (int j = i; j < ncols; j++) {
			swap(image[i][j], image[j][i]);
		}
	}

	// step 2: reverse row wise
	for (int i = 0; i < nrows; i++) {
		reverse(image[i].begin(), image[i].end());
	}
}

int main() {
	vector< vector<int> > image{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	cout << "Print Image Before Rotate:\n";
	for (auto arr : image) {
		for (auto num : arr) {
			cout << num << " ";
		}
		cout << endl;
	}

	rotate(image);

	cout << "Print Image Before Rotate:\n";
	for (auto arr : image) {
		for (auto num : arr) {
			cout << num << " ";
		}
		cout << endl;
	}

	return 0;
}