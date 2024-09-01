#include<iostream>
// including unordered_set stl library
#include<unordered_set>
// including set stl library
#include<set>
using namespace std;

int main() {

	// Declaration:
	set<int> st;
	unordered_set<int> ust;

	// --------------------------------------------------------- //

	// Initialization:

	// initialization with initial values
	set<int> km({ 4, 3, 9, 2, 0, 6 });

	// --------------------------------------------------------- //

	// Member Functions:

	// insert()
	st.insert(10);
	st.insert(15);
	st.insert(8);
	st.insert(4);

	// size()
	cout << "Size: " << st.size() << endl;

	// clear()
	st.clear();
	cout << "Size after clear: " << st.size() << endl;

	// empty()
	if (st.empty() == true)
		cout << "Set is empty" << endl;
	else
		cout << "Set is not empty" << endl;

	// find()
	st.insert(1);
	st.insert(6);
	st.insert(7);
	st.insert(123);

	if (st.find(7) != st.end())
		cout << "found" << endl;
	else
		cout << "not found" << endl;

	// count()
	if (st.count(6) == 0)
		cout << "not found" << endl;
	else
		cout << "found" << endl;

	// begin()
	cout << "Begin element: " << *(st.begin()) << endl;

	// end()
	// cout << "End element - 1: " << *(st.end()) << endl;

	// erase()
	st.erase(st.begin(), st.end());
	cout << "after erase: " << st.size() << endl;


	// --------------------------------------------------------- //

	// Traversing set using iterator

	// create set
	set<int> d;

	d.insert(1);
	d.insert(2);
	d.insert(3);
	d.insert(4);
	d.insert(5);

	// create an iterator
	set<int>::iterator it;

	it = d.begin();
	while (it != d.end())
		cout << *(it++) << " ";
	cout << endl;


	return 0;
}