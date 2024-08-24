#include<iostream>
using namespace std;

bool isPrime(int n) {

	int flag = 1;
	for (int i = 2; i < n; i++) {

		if (n % i == 0)
			flag = 0;
	}

	return flag;
}

int main() {
	int n;

	cout << "Enter any no: ";
	cin >> n;

	if (isPrime(n))
		cout << n << " is Prime No.";
	else
		cout << n << " is not a Prime No.";

	return 0;
}