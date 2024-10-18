#include<bits/stdc++.h>
using namespace std;

void getMax(int arr[], int index, int n, int& maxi) {

	// base case
	if (index >= n)	return;

	// processing
	maxi = max(maxi, arr[index]);
	// recursive call
	getMax(arr, index + 1, n, maxi);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10, i = 0, max = INT_MIN;

	getMax(arr, i, n, max);

	cout << max << endl;

	return 0;
}