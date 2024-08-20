// Debug the code. It is trying to print the given pattern.

/* Pattern
	1
	23
	345
	4567	*/

#include<iostream>
using namespace std;

int main() {
	int n;
	int i = 1;

	cout << "Enter the value of n: ";
	cin >> n;

	while (i <= n) {

		int j = i, count = 1;
		while (count <= i) {

			cout << j;
			j = j + 1;
			count = count + 1;
		}
		cout << "\n";
		i = i + 1;
	}

	return 0;
}