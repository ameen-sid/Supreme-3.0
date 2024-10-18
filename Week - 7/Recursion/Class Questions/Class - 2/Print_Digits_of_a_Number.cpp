#include<iostream>
using namespace std;

void printDigits(int n) {

	// base case
	if (n == 0)	return;

	// recursive call
	printDigits(n / 10);
	// processing
	cout << n % 10 << " ";
}

int main() {
	int n = 8937829;

	printDigits(n);

	return 0;
}