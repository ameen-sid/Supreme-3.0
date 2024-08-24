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

	for (int i = 1; i <= n; i++) {

		if (isPrime(i))
			cout << i << " is Prime No." << endl;
		else
			cout << i << " is not a Prime No." << endl;
	}

	return 0;
}