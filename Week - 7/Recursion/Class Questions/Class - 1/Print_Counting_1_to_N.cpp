#include<iostream>
using namespace std;

void printCounting(int n) {

	// Base case
	if (n == 0)	return;

	// Recurive call
	printCounting(n - 1);

	// Processing
	cout << n << " ";
}

int main() {
	int n = 8;

	printCounting(n);

	return 0;
}