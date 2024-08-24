// Debug the code. Correct the code for printing the pattern.

/*	Pattern for N = 4
	   1
	  212
	 32123
	4321234		*/

#include<iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the value of n: ";
	cin >> n;

	int i = 1;
	while (i <= n) {

		int k = 1, gaps = n - i;
		while (k <= gaps) {

			cout << " ";
			k++;
		}

		int num = i;
		while (num > 0) {

			cout << num;
			num = num - 1;
		}

		k = 2;
		while (k <= i) {

			cout << k;
			k++;
		}

		// k = 0;
		// while (k < gaps) {

		// 	cout << " ";
		// 	k++;
		// }

		i++;
		cout << "\n";
	}

	return 0;
}