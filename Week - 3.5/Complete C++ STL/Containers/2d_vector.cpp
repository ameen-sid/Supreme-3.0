#include<iostream>
// including vector stl library
#include<vector>
using namespace std;

int main() {

	// Declaration:
	vector< vector<int> > arr;

	// --------------------------------------------------------- //

	// Initialization:

	// initialization with size
	vector< vector<int> > miles(5, vector<int>(4));

	// initialization with size and default value
	vector< vector<int> > distances(3, vector<int>(4, -9));

	// initialization with initial values
	vector< vector<int> > km{
		{1, 2, 3},
		{4, 5, 6}
	};

	// --------------------------------------------------------- //

	// rows
	int rows = km.size();

	// cols
	int cols = km[0].size();

	// --------------------------------------------------------- //

	// jagged vector/jagged array
	vector< vector<int> > brr(4);

	brr[0] = vector<int>(4);
	brr[1] = vector<int>(2);
	brr[2] = vector<int>(5);
	brr[3] = vector<int>(3);

	int totalRows = brr.size();


	return 0;
}