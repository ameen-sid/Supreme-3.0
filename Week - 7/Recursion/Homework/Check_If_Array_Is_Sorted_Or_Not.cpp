#include<iostream>
using namespace std;

bool checkSorted(int arr[], int index, int n) {

	// base case
	if (index >= n - 1)	return true;

	// processing
	if (arr[index] > arr[index + 1])	return false;
	// recursive call
	return checkSorted(arr, index + 1, n);
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 8, 8, 8 };
	int n = 8, i = 0;

	if (checkSorted(arr, i, n))	cout << "Sorted";
	else	cout << "Not Sorted";

	return 0;
}