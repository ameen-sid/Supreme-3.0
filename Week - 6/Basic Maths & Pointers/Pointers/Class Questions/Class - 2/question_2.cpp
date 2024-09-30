#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int* p = &a;
	int** q = &p;

	cout << a << endl;
	cout << &a << endl;
	// cout << *a << endl;	---> Error
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	// cout << **p << endl;	---> Error
	cout << q << endl;
	cout << &q << endl;
	cout << *q << endl;
	cout << **q << endl;
	// cout << ***q << endl;	---> Error

	return 0;
}