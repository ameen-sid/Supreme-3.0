#include<iostream>
// including algorithm stl library
#include<algorithm>
#include<vector>
using namespace std;

int main() {

	vector<int> first;
	first.push_back(1);
	first.push_back(2);
	first.push_back(3);
	first.push_back(4);

	vector<int> second;
	second.push_back(3);
	second.push_back(4);
	second.push_back(5);
	second.push_back(6);

	// set union
	vector<int> result;
	set_union(first.begin(), first.end(), second.begin(), second.end(), inserter(result, result.begin()));

	cout << "set union: ";
	for (int i : result)
		cout << i << " ";
	cout << endl;

	// set intersection
	vector<int> re;
	set_intersection(first.begin(), first.end(), second.begin(), second.end(), inserter(re, re.begin()));

	cout << "set intersection: ";
	for (int i : re)
		cout << i << " ";
	cout << endl;

	// set difference
	vector<int> re2;
	set_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(re2, re2.begin()));

	cout << "set difference: ";
	for (int i : re2)
		cout << i << " ";
	cout << endl;

	// set symmetric difference
	vector<int> re3;
	set_symmetric_difference(first.begin(), first.end(), second.begin(), second.end(), inserter(re3, re3.begin()));

	cout << "set symmetric difference: ";
	for (int i : re3)
		cout << i << " ";
	cout << endl;


	return 0;
}