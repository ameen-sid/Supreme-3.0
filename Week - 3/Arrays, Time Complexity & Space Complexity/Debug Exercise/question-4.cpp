// Debug the code.

#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size) {

	for (int i = 0; i < size - 1; i = i + 2) {
		int temp = arr[i + 1];
		arr[i + 1] = arr[i];
		arr[i] = temp;
	}
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10;

	cout << "Before:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	swapAlternate(arr, n);

	cout << "After:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}