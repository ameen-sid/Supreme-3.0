// Debug the code. Correct the code for printing the pattern.

/*	Pattern for N = 5
	1234554321
	1234**4321
	123****321
	12******21
	1********1		*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	int i = 0, gaps = n - 1;
	while (i < n) {

		int k = 1, num = n - i;
		while (k <= num) {

			cout << k;
			k++;
		}

		int star = 1;
		while (star <= (n - (n - i))) {

			cout << "*";
			star++;
		}

		star = 1;
		while (star <= (n - (n - i))) {

			cout << "*";
			star++;
		}

		k = n - i;
		while (k > 0) {

			cout << k;
			k--;
		}

		i++;
		cout << "\n";
	}

	return 0;
}