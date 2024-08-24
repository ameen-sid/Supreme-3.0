#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter any no: ";
	cin >> n;

	if (n & 1)
		cout << n << " is Odd Number.";
	else
		cout << n << " is Even Number.";

	return 0;
}