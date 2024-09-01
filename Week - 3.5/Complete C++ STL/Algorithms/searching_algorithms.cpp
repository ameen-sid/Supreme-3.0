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


	// binary search
	bool it = binary_search(arr.begin(), arr.end(), 40);
	cout << "binary_search: " << it << endl;

	// lower bound
	auto iter = lower_bound(arr.begin(), arr.end(), 35);
	cout << "lower_bound: " << *iter << endl;

	// upper bound
	auto iter2 = upper_bound(arr.begin(), arr.end(), 40);
	cout << "upper_bound: " << *iter2 << endl;

	// equal range
	auto iter3 = equal_range(arr.begin(), arr.end(), 30);
	cout << "equal_range(lower bound): " << *iter3.first << endl;
	cout << "equal_range(upper bound): " << *iter3.second << endl;


	return 0;
}