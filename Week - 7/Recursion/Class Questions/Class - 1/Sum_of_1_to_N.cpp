#include<iostream>
using namespace std;

int getSum(int n) {

	// Base case
	if (n == 0 || n == 1)	return n;

	// Recursive call
	return n + getSum(n - 1);
}

int main() {
	int n = 5;

	cout << getSum(n) << endl;

	return 0;
}