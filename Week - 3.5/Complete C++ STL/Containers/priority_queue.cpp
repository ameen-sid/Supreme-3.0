#include<iostream>
// including priority queue stl library
#include<queue>
using namespace std;

int main() {

	// Declaration:
	priority_queue<int> pq;
	// max-heap -> maximum value -> highest priority

	priority_queue<int, vector<int>, greater<int> > min;
	// min-heap -> minimum value -> highest priority

	// --------------------------------------------------------- //

	// Member Functions:

	// push()
	pq.push(10);
	// 10
	pq.push(25);
	// 25, 10
	pq.push(55);
	// 55, 25, 10
	pq.push(21);
	// 55, 25, 21, 10

	// pop()
	pq.pop();
	pq.pop();

	// size()
	cout << "Size: " << pq.size() << endl;

	// top()
	cout << "Top element: " << pq.top() << endl;
	// top element -> highest priority element


	// empty()
	if (pq.empty() == true)
		cout << "Priority Queue is empty" << endl;
	else
		cout << "Priority Queue is not empty" << endl;


	// swap()
	priority_queue<int> first;
	priority_queue<int> second;

	first.push(10);
	first.push(20);

	second.push(400);
	second.push(500);

	first.swap(second);

	cout << "First: " << first.top() << endl;
	cout << "Second: " << second.top() << endl;


	return 0;
}