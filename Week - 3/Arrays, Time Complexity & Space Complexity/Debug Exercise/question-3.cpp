// Debug the code. Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.

#include<iostream>
using namespace std;

void populate(int arr[], int n) {

	int nn = n - 1;
	int j = 0;
	for (int i = 0; i < n; i = i + 2) {
		arr[nn - j] = i + 2;
		arr[j] = i + 1;
		j++;
	}
}

int main() {
	int arr[10];
	int n = 10;

	populate(arr, n);

	cout << "Print the array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	return 0;
}