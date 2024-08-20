// Debug the code. It is trying to print the given pattern.

/*	Pattern
	N = 5
	  *
	 ***
	*****
	 ***
	  *		*/

#include<iostream>
using namespace std;

void printPatt(int n) {

	int i = 1, j = 0;
	while (i <= n) {

		int gaps = (n / 2) - i + 1, k = 1;
		if (i > (n / 2)) {

			int no = (n + 1) / 2;
			gaps = (2 * (i % no)) / 2;
		}

		while (k <= gaps) {

			cout << " ";
			k = k + 1;
		}

		j++;
		if (i == (n / 2) + 2)
			j = 1;
		int ch = (n - j) - gaps;
		if (i <= (n / 2) + 1) {
			ch = 0;
			ch = (n / 2) + i - gaps;
		}
		while (ch--) {

			cout << "*";
			// ch = ch + 1;
		}

		// k = 1;
		// while (k <= gaps / 2) {

		// 	cout << " ";
		// 	k = k + 1;
		// }

		cout << "\n";
		i = i + 1;
	}
}

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	printPatt(n);

	return 0;
}