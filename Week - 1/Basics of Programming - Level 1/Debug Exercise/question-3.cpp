// Debug the code. It is trying to print the given pattern.

/*	Pattern
	N = 4
	   *
	  ***
	 *****
	*******		*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	int i = 1;
	while (i <= n) {

		// int j = i;
		int count = 2 * i - 1, gaps = (n - i);

		int k = 1;
		while (k <= gaps) {

			cout << " ";
			k = k + 1;
		}

		int m = 1;
		// int ch = count - 2 * gaps;
		while (m <= count) {

			cout << "*";
			m = m + 1;
		}

		// k = 1;
		// while (k < gaps) {

		// 	cout << " ";
		// 	k = k + 1;
		// }

		cout << "\n";
		i = i + 1;
	}

	return 0;
}