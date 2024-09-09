#include<bits/stdc++.h>
using namespace std;

int bs(int arr[], int start, int end, int target) {

	while (start <= end) {

		int mid = start + (end - start) / 2;
		if (arr[mid] == target) return mid;
		else if (target > arr[mid])	start = mid + 1;
		else	end = mid - 1;
	}
	return -1;
}

int unboundedSearch(int arr[], int target) {

	int i = 0;
	int j = i + 1;
	while (arr[j] <= target) {
		i = j;
		j *= 2;
	}
	return bs(arr, i, j, target);
}

int main() {
	int arr[] = { 3, 4, 5, 6, 11, 13, 14, 15, 56, 70 };
	int target = 13;

	if (unboundedSearch(arr, target) == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element found at index: " << unboundedSearch(arr, target) << endl;

	return 0;
}