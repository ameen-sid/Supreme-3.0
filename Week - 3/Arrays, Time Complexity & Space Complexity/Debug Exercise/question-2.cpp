// Debug the code. Linear Search.

#include<iostream>
using namespace std;

void linearSearch(int arr[], int n, int val) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == val) {
			cout << "Element Found";
			return;
		}
	}

	cout << "Element Not Found";
	return;
}

int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int n = 5;
	int value = 6;

	linearSearch(arr, n, value);

	return 0;
}