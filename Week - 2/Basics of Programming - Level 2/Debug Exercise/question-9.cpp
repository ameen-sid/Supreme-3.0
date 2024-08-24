// Debug the code. Correct the code for printing the pattern.

#include<iostream>
using namespace std;

/*	Pattern for N = 4
	4444
	333
	22
	1		*/

#include<iostream>
using namespace std;

int main() {
	int i, j, n;

	cout << "Enter the value of n: ";
	cin >> n;

	for (i = 1; i <= n; i++) {

		for (j = i; j <= n; j++)
			cout << n - i + 1;
		cout << endl;
	}

	return 0;
}