#include<iostream>
using namespace std;

int factorial(int n) {

	int fact = 1;
	while (n) {
		fact *= n--;
	}

	return fact;
}

int main() {
	int n;

	cout << "Enter any no: ";
	cin >> n;

	cout << "The Factorial of " << n << " is: " << factorial(n) << endl;

	return 0;
}