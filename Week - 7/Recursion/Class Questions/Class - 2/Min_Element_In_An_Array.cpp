#include<bits/stdc++.h>
using namespace std;

void getMin(int arr[], int index, int n, int& mini) {

	// base case
	if (index >= n)	return;

	// processing
	mini = min(mini, arr[index]);
	// recursive call
	getMin(arr, index + 1, n, mini);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10, i = 0, min = INT_MAX;

	getMin(arr, i, n, min);

	cout << min << endl;

	return 0;
}