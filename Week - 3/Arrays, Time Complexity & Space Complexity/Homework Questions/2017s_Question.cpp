#include<iostream>
using namespace std;

void twosComplements(int arr[], int n) {
	for (int i = 0; i < n; i++)
		arr[i] = (~(arr[i]) + 1);
}

int main() {
	int arr[10] = { 1, 1, 0, 0, 0, 1, 0, 0, 1, 1 };
	int size = 10;

	cout << "Before:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	twosComplements(arr, size);

	cout << "After:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}