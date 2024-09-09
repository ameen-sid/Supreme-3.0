// Debug the code. Implement selection sort.

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(int arr[], int size) {

	for (int i = 1; i < size; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main() {
	int arr[] = { 9, 4, 6, 3, 5, 3, 5, 7, 8, 10 };
	int size = 10;

	cout << "Print before sort\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	selectionSort(arr, size);

	cout << "Print after sort\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}