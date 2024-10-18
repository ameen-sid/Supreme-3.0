#include<bits/stdc++.h>
using namespace std;

void printEven(int arr[], int index, int n) {

	// base case
	if (index >= n)	return;

	// processing
	if (!(arr[index] & 1))	cout << arr[index] << " ";
	// recursive call
	printEven(arr, index + 1, n);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10, i = 0;

	printEven(arr, i, n);

	return 0;
}