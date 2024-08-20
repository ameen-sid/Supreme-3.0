// Debug the code. It is trying to print the given pattern.

/*	Pattern
	N = 5
	E
	DE
	CDE
	BCDE
	ABCDE	*/

#include<iostream>
using namespace std;

int main() {
	int i, j, n;

	cout << "Enter the value of n: ";
	cin >> n;

	for (i = n; i >= 1; i--) {

		char p = 65 + i - 1;
		for (j = 1; j <= n - i + 1; j++)
			cout << p++;
		cout << endl;
	}

	return 0;
}