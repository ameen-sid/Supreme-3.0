#include<iostream>
using namespace std;

int main() {
	int a = 56;
	int* p = &a;
	int* q = p;
	int* r = q;

	cout << a << endl;
	cout << &a << endl;
	// cout << *a << endl;	---> Error
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	cout << q << endl;
	cout << &q << endl;
	cout << *q << endl;
	cout << r << endl;
	cout << &r << endl;
	cout << *r << endl;

	return 0;
}