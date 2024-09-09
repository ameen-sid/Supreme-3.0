#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>& arr, int start, int end, int target) {

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (arr[mid] == target) return mid;
		else if (target > arr[mid])	start = mid + 1;
		else	end = mid - 1;
	}
	return -1;
}

int exponentialSearch(vector<int>& arr, int target) {

	if (arr[0] == target)	return 0;

	int n = arr.size();
	int i = 1;
	while (i < n && arr[i] <= target)
		i *= 2;	// i = i << 1;

	return bs(arr, i / 2, min(i, n - 1), target);
}

int main() {
	vector<int> arr{ 3, 4, 5, 6, 11, 13, 14, 15, 56, 70 };
	int target = 13;

	// TC: O(Log(2^Log)/2)
	if (exponentialSearch(arr, target) == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element found at index: " << exponentialSearch(arr, target) << endl;

	return 0;
}