// Debug the code. It is trying to print the given pattern.

/*	Pattern
	N = 4
	   1
	  232
	 34543
	4567654		*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	int i = 1;
	// int n = 2 * no;
	while (i <= n) {

		// int gaps = n - 2 * i + 1;
		int gaps = n - i, k = 1;
		while (k <= gaps) {

			cout << " ";
			k = k + 1;
		}

		// int ch = n - gaps + 1, z = (ch + 1) / 2;
		int j = i, z = 1;
		while (z <= i) {

			cout << j;
			j = j + 1;
			z = z + 1;
		}

		j = j - 2;
		// z = (ch - 1) / 2;
		z = 1;
		while (z <= i - 1) {

			cout << j;
			j = j - 1;
			z = z + 1;
		}

		// k = 1;
		// while (k <= gaps / 2) {

		// 	cout << " ";
		// 	k = k + 1;
		// }

		cout << "\n";
		i = i + 1;
	}

	return 0;
}