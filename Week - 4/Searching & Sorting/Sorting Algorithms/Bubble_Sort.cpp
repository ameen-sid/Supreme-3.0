#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

int main() {
	int arr[] = { 9, 4, 1, 3, 4, 2, 1, 4, 5, 3, 2, 1, 4, 5 };
	int size = 15;

	cout << "Print before sort:\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	bubbleSort(arr, size);	// TC: O(N^2)

	cout << "Print after sort\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}