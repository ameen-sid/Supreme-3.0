#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool myComp(int& a, int& b) {
	// return a < b;	// sort in increasing order
	return a > b;	// sort in decreasing order
}

bool myComparatorForFirstIndex(vector<int>& a, vector<int>& b) {
	return a[1] < b[1];	// sort with respect to 1st index
}

int main() {
	vector<int> v{ 44, 55, 22, 11, 33 };

	cout << "Print before sort:\n";
	for (auto i : v)
		cout << i << " ";
	cout << endl;

	sort(v.begin(), v.end(), myComp);

	cout << "Print after sort:\n";
	for (auto i : v)
		cout << i << " ";
	cout << endl;

	cout << "-------------------------------------------------------" << endl;

	vector< vector<int> > vv;

	vv.push_back({ 0, 22 });
	vv.push_back({ 1, 33 });
	vv.push_back({ 0, 55 });
	vv.push_back({ 0, 11 });
	vv.push_back({ 1, 44 });

	cout << "Print before sort\n";
	for (auto v : vv) {
		for (auto i : v)
			cout << i << " ";
		cout << endl;
	}

	sort(vv.begin(), vv.end(), myComparatorForFirstIndex);

	cout << "Print after sort\n";
	for (auto v : vv) {
		for (auto i : v)
			cout << i << " ";
		cout << endl;
	}

	return 0;
}