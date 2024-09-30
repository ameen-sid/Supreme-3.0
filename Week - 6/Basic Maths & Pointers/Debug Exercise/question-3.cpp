// Debug the code.

#include<iostream>
#include <math.h>
using namespace std;

bool isPrime(int n) {

	if (n == 1 || n == 0)	return false;

	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)	return false;

	return true;
}

int main() {
	int n = 7;

	if (isPrime(n))	cout << "Prime";
	else	cout << "Not a Prime";

	return 0;
}