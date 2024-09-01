#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> arr;
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);


	// Traverse using iterator

	// create an iterator
	vector<int>::iterator it;

	it = arr.begin();
	while (it != arr.end())
		cout << *(it++) << " ";
	cout << endl;


	return 0;
}