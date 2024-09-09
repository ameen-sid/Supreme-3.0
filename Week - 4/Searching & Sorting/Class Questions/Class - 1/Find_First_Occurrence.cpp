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

int main() {
	int arr[] = { 10, 20, 20, 20, 20, 20, 20, 30, 40, 50, 60 };
	int n = 11;
	int target = 20;
	int ansIndex = -1;

	findFirstOccurrence(arr, n, target, ansIndex);
	cout << "First Occurrence Index: " << ansIndex << endl;

	return 0;
}