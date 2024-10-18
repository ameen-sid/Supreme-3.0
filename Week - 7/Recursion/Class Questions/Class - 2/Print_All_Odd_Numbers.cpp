#include<bits/stdc++.h>
using namespace std;

void printOdd(int arr[], int index, int n) {

	// base case
	if (index >= n)	return;

	// processing
	if (arr[index] & 1)	cout << arr[index] << " ";
	// recursive call
	printOdd(arr, index + 1, n);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10, i = 0;

	printOdd(arr, i, n);

	return 0;
}