#include<iostream>
using namespace std;

int pow(int n) {

	// Base case
	if (n == 0)	return 1;

	// Recursive call
	return 2 * pow(n - 1);
}

int main() {
	int n = 4;

	cout << pow(n) << endl;

	return 0;
}