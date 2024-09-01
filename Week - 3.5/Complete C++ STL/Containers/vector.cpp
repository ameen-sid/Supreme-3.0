#include<iostream>
// including vector stl library
#include<vector>
using namespace std;

int main() {

	// Declaration:
	vector<int> marks;

	// --------------------------------------------------------- //

	// Initialization:

	// initialization with size
	vector<int> miles(10);

	// initialization with size and default value
	vector<int> distances(15, 0);

	// initialization with initial values
	vector<int> km{ 10, 20, 30 };

	// --------------------------------------------------------- //

	// Member Functions:

	// begin()
	cout << "Begin Element: " << *(km.begin()) << endl;

	// end()
	cout << "End - 1 Element: " << *(km.end() - 1) << endl;

	// size()
	cout << "Size: " << marks.size() << endl;

	// push_back()
	marks.push_back(1);
	marks.push_back(2);
	marks.push_back(3);
	marks.push_back(4);
	marks.push_back(5);
	marks.push_back(6);
	cout << "Size: " << marks.size() << endl;

	// pop_back()
	marks.pop_back();
	marks.pop_back();
	cout << "Size: " << marks.size() << endl;

	// front()
	cout << "Front Element: " << marks.front() << endl;

	// back()
	cout << "Back Element: " << marks.back() << endl;

	// empty()
	if (marks.empty() == true)
		cout << "Vector is empty" << endl;
	else
		cout << "Vector is not empty" << endl;


	// operator[]
	cout << "marks[0]: " << marks[0] << endl;
	cout << "marks[1]: " << marks[1] << endl;

	marks[0] = 100;
	cout << "after assign new value marks[0]: " << marks[0] << endl;

	// vector<int> age;
	// age[0] = 10;	// --> throw an error


	// at()
	cout << "marks.at(0): " << marks.at(0) << endl;
	cout << "marks.at(1): " << marks.at(1) << endl;

	marks.at(0) = 10;
	cout << "after assign new value marks.at(0): " << marks.at(0) << endl;

	// vector<int> age;
	// age.at(0) = 10;	// --> also throw an error


	// capacity()
	cout << "marks.capacity(): " << marks.capacity() << endl;
	cout << "Size: " << marks.size() << endl;

	// reserve()
	vector<int> age;
	cout << "age.capacity(): " << age.capacity() << endl;

	age.reserve(10);
	cout << "age.capacity(): " << age.capacity() << endl;


	// max_size()
	cout << "marks.max_size(): " << marks.max_size() << endl;

	// clear()
	cout << "Size: " << marks.size() << endl;
	marks.clear();
	cout << "Size after clear: " << marks.size() << endl;


	// insert()
	marks.push_back(10);
	marks.push_back(20);
	marks.push_back(30);
	marks.push_back(40);
	cout << "marks[0]: " << marks[0] << endl;
	marks.insert(marks.begin(), 50);
	cout << "marks[0] after insertion: " << marks[0] << endl;

	// erase()
	cout << "size: " << marks.size() << endl;
	marks.erase(marks.begin());
	cout << "size: " << marks.size() << endl;
	marks.erase(marks.begin(), marks.end());
	cout << "size: " << marks.size() << endl;

	// swap()
	vector<int> first;
	vector<int> second;

	first.push_back(10);
	first.push_back(11);
	first.push_back(12);
	first.push_back(13);

	second.push_back(100);
	second.push_back(200);
	second.push_back(300);
	second.push_back(400);

	first.swap(second);

	cout << "first: ";
	for (int i : first)
		cout << i << " ";
	cout << endl;

	cout << "second: ";
	for (int i : second)
		cout << i << " ";
	cout << endl;

	// --------------------------------------------------------- //

	// Traversing vector using iterator

	// create an iterator
	vector<int>::iterator it;

	it = first.begin();
	while (it != first.end())
		cout << *(it++) << " ";
	cout << endl;


	return 0;
}