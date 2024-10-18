#include<iostream>
using namespace std;

int factorial(int n) {

	// Base case
	if (n == 0 || n == 1)	return 1;

	// Recursive call
	/* fact(n) = n * fact(n-1);
	   big problem -> fact(n);
	   small problem -> fact(n-1); */
	return n * factorial(n - 1);

	// processing
}

int main() {
	int n = 6;

	cout << factorial(n) << endl;

	return 0;
}