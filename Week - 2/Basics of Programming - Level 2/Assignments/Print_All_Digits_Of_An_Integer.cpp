#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter any no: ";
	cin >> n;

	while (n > 0) {
		int digit = n % 10;
		cout << "Digit: " << digit << endl;
		n /= 10;
	}

	return 0;
}