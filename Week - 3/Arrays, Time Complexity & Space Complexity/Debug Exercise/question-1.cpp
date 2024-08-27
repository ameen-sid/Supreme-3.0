// Debug the code. Sum of array.

#include<iostream>
using namespace std;

int main() {
	int n, sum = 0;

	cout << "Enter the no of elements of array: ";
	cin >> n;

	int input[n];

	cout << "Enter the elements of the array:\n";
	for (int i = 0; i < n; i++)
		cin >> input[i];


	for (int i = 0; i < n; i++)
		sum += input[i];

	cout << sum << endl;

	return 0;
}