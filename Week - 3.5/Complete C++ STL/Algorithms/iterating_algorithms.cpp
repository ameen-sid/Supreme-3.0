#include<iostream>
// including algorithm library
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a) {
	cout << 2 * a << " ";
}

bool checkEven(int a) {
	return a % 2 == 0;
}

int main() {

	vector<int> arr(8);
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	arr[5] = 11;
	arr[6] = 11;
	arr[7] = 11;


	// for each
	cout << "forEach print double: ";
	for_each(arr.begin(), arr.end(), printDouble);
	cout << endl;

	// find
	auto it = find(arr.begin(), arr.end(), 40);
	cout << "find: " << *it << endl;

	// find if
	auto it2 = find_if(arr.begin(), arr.end(), checkEven);
	cout << "find_if: " << *it2 << endl;

	// count
	int ans = count(arr.begin(), arr.end(), 11);
	cout << "count: " << ans << endl;

	// count if
	int ans2 = count_if(arr.begin(), arr.end(), checkEven);
	cout << "count_if: " << ans2 << endl;

	// sort
	sort(arr.begin(), arr.end());
	cout << "sort: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// reverse
	reverse(arr.begin(), arr.end());
	cout << "reverse: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// rotate
	rotate(arr.begin(), arr.begin() + 3, arr.end());
	cout << "rotate left: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	sort(arr.begin(), arr.end());
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	rotate(arr.begin(), arr.begin() + arr.size() - 3, arr.end());
	cout << "rotate right: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// unique
	auto it3 = unique(arr.begin(), arr.end());
	arr.erase(it3, arr.end());
	cout << "unique: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// partition
	auto it4 = partition(arr.begin(), arr.end(), checkEven);
	cout << "partition: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;


	return 0;
}