#include<iostream>
// including algorithm stl library
#include<algorithm>
// including numeric stl library
#include<numeric>
#include<vector>
using namespace std;

int main() {

	vector<int> arr(5);
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	// accumulate
	int totalSum = accumulate(arr.begin(), arr.end(), 0);
	cout << "accumulate: " << totalSum << endl;

	// inner product
	vector<int> first;
	first.push_back(1);
	first.push_back(2);
	first.push_back(3);

	vector<int> second;
	second.push_back(3);
	second.push_back(4);
	second.push_back(5);

	int ans = inner_product(first.begin(), first.end(), second.begin(), 0);
	cout << "inner_product: " << ans << endl;

	// partial sum
	vector<int> result(first.size());
	partial_sum(first.begin(), first.end(), result.begin());

	cout << "partial_sum: ";
	for (int i : result)
		cout << i << " ";
	cout << endl;

	// iota
	vector<int> v(10);
	iota(v.begin(), v.end(), 250);

	cout << "iota: ";
	for (int i : v)
		cout << i << " ";
	cout << endl;


	return 0;
}