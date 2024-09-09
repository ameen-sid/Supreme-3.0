#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {

	for (int i = 1; i < n; i++) {

		int key = arr[i];
		int j = i - 1;
		// move elements of arr[0...i-1] that are greater than key to one position ahead of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main() {
	int arr[] = { 9, 4, 1, 3, 4, 2, 1, 4, 5, 3, 2, 1, 4, 5 };
	int size = 15;

	cout << "Print before sort:\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	insertionSort(arr, size);	// TC: O(N^2)

	cout << "Print after sort\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}