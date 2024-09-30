#include<iostream>
using namespace std;

int main() {
	int* ptr = 0;	// Null Pointer

	int a = 10;

	*ptr = a;

	cout << *ptr << endl;
	// Output: Runtime Error

	return 0;
}