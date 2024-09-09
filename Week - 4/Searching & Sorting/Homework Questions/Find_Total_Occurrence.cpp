#include<iostream>
using namespace std;

void findFirstOccurrence(int arr[], int n, int target, int& ansIndex) {

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		if (arr[mid] == target) {
			// ans found -> may or maynot be first occurrence
			// store and compute
			ansIndex = mid;
			// check for left
			end = mid - 1;
		}
		else if (target > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;

		mid = start + ((end - start) / 2);
	}
}

void findLastOccurrence(int arr[], int n, int target, int& ansIndex) {

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		if (arr[mid] == target) {
			// ans found -> may or maynot be first occurrence
			// store and compute
			ansIndex = mid;
			// check for right
			start = mid + 1;
		}
		else if (target > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;

		mid = start + ((end - start) / 2);
	}
}

int findTotalOccurrence(int arr[], int n, int target) {

	int firstOcc = -1;
	int lastOcc = -1;

	findFirstOccurrence(arr, n, target, firstOcc);
	findLastOccurrence(arr, n, target, lastOcc);

	return lastOcc - firstOcc + 1;
}

int main() {
	int arr[] = { 10, 20, 20, 20, 20, 20, 20, 40, 50 };
	int n = 9;
	int target = 20;

	int ans = findTotalOccurrence(arr, n, target);
	cout << "The Total Occurrence of " << target << " is: " << ans << endl;

	return 0;
}