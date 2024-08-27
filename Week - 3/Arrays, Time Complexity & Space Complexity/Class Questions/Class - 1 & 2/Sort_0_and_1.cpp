#include<iostream>
#include<algorithm>
using namespace std;

void sort01(int arr[], int n) {

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		if (arr[start] == 0 && arr[end] == 1) {
			start++;
			end--;
		}

		if (arr[start] == 1 && arr[end] == 0)
			swap(arr[start++], arr[end--]);

		if (arr[start] == 0)
			start++;

		if (arr[end] == 1)
			end--;
	}
}

void sortZeroOne(int arr[], int n) {

	int zeroCount = 0;
	int oneCount = 0;

	for (int i = 0; i < n; i++) {

		if (arr[i] == 0)
			zeroCount++;
		else
			oneCount++;
	}

	// int i = 0;
	// for (; i < zeroCount; i++)
	// 	arr[i] = 0;
	// for (; i < n; i++)
	// 	arr[i] = 1;

	fill(arr, arr + zeroCount, 0);
	fill(arr + zeroCount, arr + n, 1);
}

int main() {
	int arr[] = { 0, 1, 1, 1, 0, 0, 1 };
	int size = 7;

	// sortZeroOne(arr, size);	// Time Complexity: O(N)
	// sort(arr, arr + size);	// Time Complexity: O(N logN)
	sort01(arr, size);			// Time Complexity: O(N)

	cout << "Print the array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}