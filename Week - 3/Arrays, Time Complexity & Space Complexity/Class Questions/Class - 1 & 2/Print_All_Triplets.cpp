#include<iostream>
using namespace std;

void printAllTriplets(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << endl;
			}
		}
	}
}

int main() {
	int arr[4] = { 10, 20, 30, 40 };
	int size = 4;

	printAllTriplets(arr, size);	// TC: O(N^3)

	return 0;
}