#include<iostream>
using namespace std;

int main() {
	int a = 5;
	int* p = &a;
	int* q = p;

	cout << a << endl;
	cout << &a << endl;
	// cout << *a << endl;	--->	Error
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	cout << q << endl;	// --> Copy
	cout << &q << endl;
	cout << *q << endl;

	return 0;
}