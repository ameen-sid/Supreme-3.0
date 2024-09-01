#include<iostream>
// including algorithm stl library
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> arr;
	arr.push_back(22);
	arr.push_back(11);
	arr.push_back(55);
	arr.push_back(66);
	arr.push_back(77);


	// make heap
	make_heap(arr.begin(), arr.end());
	cout << "make heap: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	arr.push_back(99);
	cout << "inserting element after make heap: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// push heap
	push_heap(arr.begin(), arr.end());
	cout << "push heap: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// pop heap
	pop_heap(arr.begin(), arr.end());
	cout << "pop heap: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	arr.pop_back();
	cout << "after deletion: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;

	// sort heap
	sort_heap(arr.begin(), arr.end());
	cout << "sort heap: ";
	for (int i : arr)
		cout << i << " ";
	cout << endl;


	return 0;
}