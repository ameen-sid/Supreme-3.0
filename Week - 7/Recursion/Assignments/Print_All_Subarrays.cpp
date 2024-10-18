#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, int start, int end) {

	// base case
	if (start >= arr.size())	return;

	// processing
	for (int i = start; i <= end; i++)
		cout << arr[i] << " ";
	cout << endl;

	if (end == arr.size() - 1) {

		start++;
		end = start - 1;
	}

	// recursive call
	solve(arr, start, end + 1);
}

void printAllSubArrays(vector<int> arr) {

	int start = 0, end = 0;
	solve(arr, start, end);
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 5 };

	printAllSubArrays(arr);

	return 0;
}