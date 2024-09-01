#include<iostream>
#include<forward_list>
#include<list>
#include<vector>
using namespace std;

int main() {

	// Forward Iterator:
	forward_list<int> ls;
	ls.push_front(10);
	ls.push_front(20);
	ls.push_front(30);

	// Traverse using iterator
	forward_list<int>::iterator it;

	it = ls.begin();
	while (it != ls.end()) {
		*(it) = *(it)+5;
		cout << *(it++) << " ";
	}
	cout << endl;

	// try to move backward
	forward_list<int>::iterator it2 = ls.end();

	// while (it2 != ls.begin())
	// 	cout << *(it2--);	// throw an error
	// cout << endl;


	// Bi-Directional Iterator:
	list<int> lis;
	lis.push_back(10);
	lis.push_back(20);
	lis.push_back(30);

	// Traverse using iterator

	// forward
	list<int>::iterator it3 = lis.begin();
	while (it3 != lis.end()) {
		*(it3) = *(it3)+2;
		cout << *(it3++) << " ";
	}
	cout << endl;

	// backward
	list<int>::iterator it4 = lis.end();
	while (it4 != lis.begin()) {
		cout << *(--it4) << " ";
	}
	cout << endl;


	// Random Access Iterator:
	vector<int> v = { 10, 20, 30, 40, 50 };

	// Traverse using iterator
	vector<int>::iterator it5 = v.begin();

	while (it5 != v.end()) {

		// write
		*it5 = *it5 + 7;
		// read
		cout << *it5 << " ";
		// forward move 
		it5++;
	}
	cout << endl;

	// backward
	vector<int>::iterator it6 = v.end();
	while (it6 != v.begin()) {

		// read + backward move
		cout << *(--it6) << " ";
	}
	cout << endl;

	// random access
	vector<int>::iterator it7 = v.begin() + 3;
	cout << *it7 << endl;


	return 0;
}