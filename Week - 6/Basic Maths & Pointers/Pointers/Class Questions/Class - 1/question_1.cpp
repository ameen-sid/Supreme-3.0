#include<iostream>
using namespace std;

int main() {
	int a = 5;
	int* ptr = &a;

	cout << a << endl;
	cout << &a << endl;
	// cout << *a << endl;	--->	Error
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *ptr << endl;
	ptr = ptr + 1;
	cout << ptr << endl;
	*ptr = *ptr / 2;
	cout << *ptr << endl;
	*ptr = *ptr + 1;
	cout << *ptr << endl;

	return 0;
}