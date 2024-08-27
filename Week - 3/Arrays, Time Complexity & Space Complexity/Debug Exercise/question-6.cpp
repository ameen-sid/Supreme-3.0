// Debug the code. List all triplets in array that sums to X.

#include<iostream>
using namespace std;

void tripletSumToX(int input[], int size, int x) {

	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			for (int k = j; k < size; k++) {
				if (input[i] + input[j] + input[k] == x)
					cout << "[" << input[i] << ", " << input[j] << ", " << input[k] << "]" << endl;
			}
		}
	}
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10;
	int x = 6;

	tripletSumToX(arr, n, x);

	return 0;
}