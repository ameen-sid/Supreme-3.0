#include<iostream>
// including stack stl library
#include<stack>
using namespace std;

int main() {

	// Declaration:
	stack<int> st;

	// --------------------------------------------------------- //

	// Member Functions:

	// push()
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);

	// pop()
	st.pop();
	st.pop();

	// size()
	cout << "Size: " << st.size() << endl;

	// empty()
	if (st.empty() == true)
		cout << "Stack is empty" << endl;
	else
		cout << "Stack is not empty" << endl;


	// top()
	cout << "Top element: " << st.top() << endl;

	// swap()
	stack<int> first;
	stack<int> second;

	first.push(10);
	first.push(20);

	second.push(400);
	second.push(500);

	first.swap(second);

	cout << "First: " << first.top() << endl;
	cout << "Second: " << second.top() << endl;


	return 0;
}