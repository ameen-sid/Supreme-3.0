#include<iostream>
// including list stl library
#include<list>
using namespace std;

int main() {

	// Declaration:
	list<int> myList;

	// --------------------------------------------------------- //

	// Initialization:

	// initialization with size
	list<int> miles(10);

	// initialization with size and default value
	list<int> distances(15, 0);

	// initialization with initial values
	list<int> km{ 10, 20, 30 };

	// --------------------------------------------------------- //

	// Member Functions:

	// insertions:

	// push_back()
	myList.push_back(10);
	// 10
	myList.push_back(20);
	// 10 -> 20
	myList.push_back(30);
	// 10 -> 20 -> 30
	myList.push_back(40);
	// 10 -> 20 -> 30 -> 40

	// push_front()
	myList.push_front(50);
	// 50 -> 10 -> 20 -> 30 -> 40
	myList.push_front(60);
	// 60 -> 50 -> 10 -> 20 -> 30 -> 40
	myList.push_front(70);
	// 70 -> 60 -> 50 -> 10 -> 20 -> 30 -> 40
	myList.push_front(80);
	// 80 -> 70 -> 60 -> 50 -> 10 -> 20 -> 30 -> 40


	// deletions:

	// pop_back()
	myList.pop_back();
	// 80 -> 70 -> 60 -> 50 -> 10 -> 20 -> 30
	myList.pop_back();
	// 80 -> 70 -> 60 -> 50 -> 10 -> 20

	// pop_front()
	myList.pop_front();
	// 70 -> 60 -> 50 -> 10 -> 20
	myList.pop_front();
	// 60 -> 50 -> 10 -> 20


	// size()
	cout << "Size: " << myList.size() << endl;

	// front()
	cout << "Front element: " << myList.front() << endl;

	// back()
	cout << "Back element: " << myList.back() << endl;

	// begin()
	cout << "Begin element: " << *(myList.begin()) << endl;

	// end()
	cout << "End element - 1: " << *(--myList.end()) << endl;


	// insert()
	myList.insert(myList.begin(), 99);
	cout << "after insert: ";
	for (auto i : myList)
		cout << i << " ";
	cout << endl;


	// clear()
	myList.clear();
	cout << "Size after clear: " << myList.size() << endl;


	// empty()
	if (myList.empty() == true)
		cout << "List is empty" << endl;
	else
		cout << "List is not empty" << endl;


	// remove()
	list<int> l;

	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	l.push_back(10);

	cout << "before removing: ";
	for (auto i : l)
		cout << i << " ";
	cout << endl;

	l.remove(10);

	cout << "after removing: ";
	for (auto i : l)
		cout << i << " ";
	cout << endl;


	// erase()
	l.erase(l.begin(), l.end());
	cout << "Size after erase: " << l.size() << endl;

	// swap()
	list<int> first;
	list<int> second;

	first.push_back(1);
	first.push_back(2);
	first.push_back(3);
	// 1 -> 2 -> 3

	second.push_back(11);
	second.push_back(22);
	second.push_back(33);
	// 11 -> 22 -> 33

	first.swap(second);

	cout << "first: ";
	for (auto i : first)
		cout << i << " ";
	cout << endl;

	cout << "second: ";
	for (auto i : second)
		cout << i << " ";
	cout << endl;

	// --------------------------------------------------------- //

	// Traversing list using iterator

	// create list
	list<int> ls;

	ls.push_back(1);
	ls.push_back(2);
	ls.push_back(3);
	ls.push_back(4);
	ls.push_back(5);

	// create an iterator
	list<int>::iterator it;

	it = ls.begin();
	while (it != ls.end())
		cout << *(it++) << " ";
	cout << endl;


	return 0;
}