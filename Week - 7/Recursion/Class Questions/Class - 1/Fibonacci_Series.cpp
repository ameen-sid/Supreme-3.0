#include<iostream>
using namespace std;

int fibonacci(int n) {

	// Base case
	if (n == 0 || n == 1)	return n;

	// Recursive call
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n = 9;

	cout << fibonacci(n) << endl;

	return 0;
}