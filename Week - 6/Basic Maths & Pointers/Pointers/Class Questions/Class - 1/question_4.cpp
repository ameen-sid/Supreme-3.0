#include<iostream>
using namespace std;

int main() {
	int arr[] = { 10, 20, 30, 40 };
	int* ptr = arr;

	cout << arr << endl;
	cout << &arr << endl;
	cout << arr[0] << endl;
	cout << &arr[0] << endl;
	cout << ptr << endl;
	cout << &ptr << endl;
	cout << *ptr << endl;
	cout << (*arr) + 1 << endl;
	cout << *(arr + 1) << endl;
	cout << *(arr + 3) << endl;

	return 0;
}