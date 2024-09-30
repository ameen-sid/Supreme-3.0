#include<iostream>
using namespace std;

int main() {
	int arr[] = { 100, 200, 300, 400, 500 };
	int* p = arr;
	int* q = arr + 1;

	cout << arr << endl;
	cout << &arr << endl;
	cout << arr[0] << endl;
	cout << &arr[0] << endl;
	cout << p << endl;
	cout << &p << endl;
	cout << *p << endl;
	cout << q << endl;
	cout << &q << endl;
	cout << *q << endl;
	cout << (*p) + 1 << endl;
	cout << *(p)+2 << endl;
	cout << *(p + 2) << endl;
	cout << *q + 2 << endl;
	cout << *(q + 4) << endl;

	return 0;
}