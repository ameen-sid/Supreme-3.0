#include<iostream>
using namespace std;

void printAllPairs(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << "[" << arr[i] << ", " << arr[j] << "]" << " ";
		cout << endl;
	}
}

int main() {
	int arr[] = { 10, 20, 30, 40 };
	int size = 4;

	printAllPairs(arr, size);	// Time Complexity: O(N^2)

	return 0;
}