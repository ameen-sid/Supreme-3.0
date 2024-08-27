// Debug the code. Sort 0s and 1s

#include<iostream>
using namespace std;

void sort0sand1s(int input[], int size) {

	int nextZero = 0;
	for (int i = 0; i < size; i++) {
		if (input[i] == 0) {
			int temp = input[nextZero];
			input[nextZero] = input[i];
			input[i] = temp;
			nextZero++;
		}
	}
}

int main() {
	int arr[8] = { 1, 0, 1, 1, 0, 1, 0, 0 };
	int n = 8;

	cout << "Before:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	sort0sand1s(arr, n);

	cout << "After:\n";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}