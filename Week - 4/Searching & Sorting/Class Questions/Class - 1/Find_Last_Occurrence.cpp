#include<iostream>
using namespace std;

void findLastOccurrence(int arr[], int n, int target, int& ansIndex) {

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		if (arr[mid] == target) {
			// ans found -> may or maynot be last occurrence
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

int main() {
	int arr[] = { 10, 20, 20, 20, 20, 20, 20, 20, 20, 30 };
	int n = 10;
	int target = 20;
	int ansIndex = -1;

	findLastOccurrence(arr, n, target, ansIndex);
	cout << "Last Occurrence Index: " << ansIndex << endl;

	return 0;
}