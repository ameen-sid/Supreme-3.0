// Debug the code. List all pairs in array that sums to X.

#include<iostream>
using namespace std;

void pairSumToX(int input[], int size, int x) {

	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (input[i] + input[j] == x)
				cout << "[" << input[i] << ", " << input[j] << "]" << endl;
		}
	}
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10;
	int x = 6;

	pairSumToX(arr, n, x);

	return 0;
}

