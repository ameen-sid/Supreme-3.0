// Debug the code. Find the second largest in the code.

#include<iostream>
#include<climits>
using namespace std;


int main() {
	int n;

	cout << "Enter the size of array: ";
	cin >> n;

	int arr[n];

	cout << "Enter the elements of array: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	int second = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (max > arr[i] && arr[i] > second) {
			second = arr[i];
		}
	}

	cout << "The Second Minimum no is: " << second;

	return 0;
}