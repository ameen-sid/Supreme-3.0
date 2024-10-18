#include<bits/stdc++.h>
using namespace std;

void storeOdd(int arr[], int index, int n, vector<int>& ans) {

	// base case
	if (index >= n)	return;

	// processing
	if (arr[index] & 1)	ans.push_back(arr[index]);
	// recursive call
	storeOdd(arr, index + 1, n, ans);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10, i = 0;
	vector<int> ans;

	storeOdd(arr, i, n, ans);

	for (auto v : ans)
		cout << v << " ";
	cout << endl;

	return 0;
}