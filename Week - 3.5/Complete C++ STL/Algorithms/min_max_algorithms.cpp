#include<iostream>
// including algorithm stl library
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> arr(5);
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	int a = 10;
	int b = 15;

	// min
	cout << "min: " << min(a, b) << endl;

	// max
	cout << "max: " << max(a, b) << endl;

	// min element
	auto it = min_element(arr.begin(), arr.end());
	cout << "min_element: " << *it << endl;

	// max element
	auto it2 = max_element(arr.begin(), arr.end());
	cout << "max_element: " << *it2 << endl;


	return 0;
}