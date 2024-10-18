#include<iostream>
using namespace std;

void printArray(int arr[], int index, int n) {

	// base case
	if (index >= n)	return;

	// processing
	cout << arr[index] << " ";
	// recursive call
	printArray(arr, index + 1, n);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10;
	int i = 0;

	printArray(arr, i, n);

	return 0;
}