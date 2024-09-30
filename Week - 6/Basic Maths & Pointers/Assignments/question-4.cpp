#include<iostream>
using namespace std;

int main() {
	int b = 10;

	int* a = &b;

	cout << a << endl;
	// Output: Prints the address of b

	return 0;
}