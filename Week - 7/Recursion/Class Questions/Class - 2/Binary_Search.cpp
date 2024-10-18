#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {

	// base case
	if (start > end)	return -1;

	// processing
	int mid = start + ((end - start) >> 1);
	if (arr[mid] == target)	return mid;
	// recursive call
	if (arr[mid] > target)	return binarySearch(arr, start, mid - 1, target);
	else	return binarySearch(arr, mid + 1, end, target);
}

int main() {
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = 10, k = 1;
	int s = 0, e = n - 1;

	cout << binarySearch(arr, s, e, k);

	return 0;
}