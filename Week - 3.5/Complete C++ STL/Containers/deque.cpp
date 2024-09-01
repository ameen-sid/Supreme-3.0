#include<iostream>
// including deque stl library
#include<deque>
using namespace std;

int main() {

	// Declaration:
	deque<int> dq;

	// --------------------------------------------------------- //

	// Initialization:

	// initialization with size
	deque<int> miles(10);

	// initialization with size and default value
	deque<int> distances(15, 0);

	// initialization with initial values
	deque<int> km{ 10, 20, 30 };

	// --------------------------------------------------------- //

	// Member Functions:

	// insertions:

	// push_back()
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);

	// push_front()
	dq.push_front(50);
	dq.push_front(60);
	dq.push_front(70);
	dq.push_front(80);

	// deletions:

	// pop_back()
	dq.pop_back();
	dq.pop_back();

	// pop_front()
	dq.pop_front();
	dq.pop_front();


	// size()
	cout << "Size: " << dq.size() << endl;

	// front()
	cout << "Front element: " << dq.front() << endl;

	// back()
	cout << "Back element: " << dq.back() << endl;


	// empty()
	if (dq.empty() == true)
		cout << "Deque is empty" << endl;
	else
		cout << "Deque is not empty" << endl;


	// begin()
	cout << "Begin element: " << *(dq.begin()) << endl;

	// end()
	cout << "End element - 1: " << *(dq.end() - 1) << endl;

	// operator[]
	cout << "dq[0]: " << dq[0] << endl;
	cout << "dq[1]: " << dq[1] << endl;

	dq[0] = 100;
	cout << "after assign new value dq[0]: " << dq[0] << endl;

	// deque<int> age;
	// age[0] = 10;	// --> throw an error


	// at()
	cout << "dq.at(0): " << dq.at(0) << endl;
	cout << "dq.at(1): " << dq.at(1) << endl;

	dq.at(0) = 10;
	cout << "after assign new value dq.at(0): " << dq.at(0) << endl;

	// deque<int> age;
	// age.at(0) = 10;	// --> also throw an error


	// insert()
	dq.insert(dq.begin(), 101);
	cout << "after insert: ";
	for (int i : dq)
		cout << i << " ";
	cout << endl;

	// erase()
	dq.erase(dq.begin(), dq.begin() + 2);
	cout << "after erase: ";
	for (int i : dq)
		cout << i << " ";
	cout << endl;

	// clear()
	dq.clear();
	cout << "Size after clear: " << dq.size() << endl;

	// swap()
	deque<int> first;
	deque<int> second;

	first.push_back(10);
	first.push_back(20);

	second.push_back(400);
	second.push_back(500);

	first.swap(second);

	cout << "First: ";
	for (int i : first)
		cout << i << " ";
	cout << endl;

	cout << "Second: ";
	for (int i : second)
		cout << i << " ";
	cout << endl;

	// --------------------------------------------------------- //

	// Traversing deque using iterator

	// create deque
	deque<int> d;

	d.push_back(1);
	d.push_back(2);
	d.push_back(3);
	d.push_back(4);
	d.push_back(5);

	// create an iterator
	deque<int>::iterator it;

	it = d.begin();
	while (it != d.end())
		cout << *(it++) << " ";
	cout << endl;


	return 0;
}