#include<iostream>
using namespace std;

int setBits(int N) {

	int count = 0;
	while (N > 0) {

		if (N & 1)
			count++;

		N = N >> 1;
	}

	return count;
}

int main() {
	int n;

	cout << "Enter any no: ";
	cin >> n;

	cout << "The no of set bits in " << n << " is " << setBits(n) << endl;

	return 0;
}