#include<iostream>
// including queue stl library
#include<queue>
using namespace std;

int main() {

	// Declaration:
	queue<int> q;

	// --------------------------------------------------------- //

	// Member Functions:

	// push()
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	// pop()
	q.pop();
	q.pop();

	// size()
	cout << "Size: " << q.size() << endl;

	// empty()
	if (q.empty() == true)
		cout << "Queue is empty" << endl;
	else
		cout << "Queue is not empty" << endl;


	// front()
	cout << "Front element: " << q.front() << endl;

	// back()
	cout << "Back element: " << q.back() << endl;

	// swap()
	queue<int> first;
	queue<int> second;

	first.push(1);
	first.push(2);

	second.push(40);
	second.push(50);

	first.swap(second);

	cout << "First: " << first.front() << " " << first.back() << endl;
	cout << "Second: " << second.front() << " " << second.back() << endl;


	return 0;
}