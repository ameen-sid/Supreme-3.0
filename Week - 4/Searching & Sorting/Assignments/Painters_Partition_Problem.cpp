#include<bits/stdc++.h>
using namespace std;

// GFG

bool isPossibleSol(int arr[], int n, int k, long long mid) {

	long long timeSum = 0;
	int paintersCount = 1;
	for (int i = 0; i < n; i++) {

		if (arr[i] > mid)    return false;
		else if (timeSum + arr[i] > mid) {

			paintersCount++;
			timeSum = arr[i];

			if (paintersCount > k)   return false;
		}
		else    timeSum += arr[i];
	}

	return true;
}

long long minTime(int arr[], int n, int k) {

	long long start = 0;
	long long end = 0; //accumulate(arr, arr + n, 0);
	for (int i = 0; i < n; i++)  end += arr[i];

	long long ans = -1;
	while (start <= end) {

		long long mid = start + ((end - start) >> 1);
		if (isPossibleSol(arr, n, k, mid)) {

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
	int arr[] = { 10, 20, 30, 40 };
	int size = 4;
	int k = 2;

	cout << "Min Time: " << minTime(arr, size, k) << endl;

	return 0;
}