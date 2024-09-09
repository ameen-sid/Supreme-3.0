#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {

	for (int i = 0; i < n - 1; i++) {

		int minIndex = i;	// ith element is the smallest element
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex])	minIndex = j;
		}

		// swap ith and minIndex element
		swap(arr[i], arr[minIndex]);
	}
}

int main() {
	int arr[] = { 9, 4, 1, 3, 4, 2, 1, 4, 5, 3, 2, 1, 4, 5 };
	int size = 15;

	cout << "Print before sort:\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	selectionSort(arr, size);	// TC: O(N^2)

	cout << "Print after sort\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}