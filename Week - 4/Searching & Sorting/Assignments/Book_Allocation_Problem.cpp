#include<bits/stdc++.h>
using namespace std;

// GFG

bool isPossibleSol(int arr[], int n, int m, int sol) {

	int pageSum = 0;
	int counter = 1;
	for (int i = 0; i < n; i++) {

		if (arr[i] > sol)    return false;
		else if (pageSum + arr[i] > sol) {
			counter++;
			pageSum = arr[i];

			if (counter > m) return false;
		}
		else    pageSum += arr[i];
	}

	return true;
}

long long findPages(int arr[], int n, int m) {

	// Edge Case
	if (m > n)   return -1;

	int start = *max_element(arr, arr + n);
	int end = accumulate(arr, arr + n, 0);

	int ans = -1;
	while (start <= end) {

		int mid = start + (end - start) / 2;
		if (isPossibleSol(arr, n, m, mid)) {
			// store and compute
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}

	return ans;
}

int main() {
	int arr[] = { 12, 34, 67, 90 };
	int size = 4;
	int m = 2;

	cout << "Ans: " << findPages(arr, size, m) << endl;

	return 0;
}