#include<iostream>
using namespace std;

int main() {
	int a = 50;
	int* p = &a;
	int** q = &p;
	int** r = q;
	int*** s = &q;

	cout << a << endl;
	cout << &a << endl;
	// cout << *a << endl;	---> Error
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	cout << q << endl;
	cout << &q << endl;
	cout << *q << endl;
	cout << **q << endl;
	cout << r << endl;
	cout << &r << endl;
	cout << *r << endl;
	cout << **r << endl;
	cout << s << endl;
	cout << &s << endl;
	cout << *s << endl;
	cout << **s << endl;
	cout << ***s << endl;

	return 0;
}