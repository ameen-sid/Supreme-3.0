#include<bits/stdc++.h>
using namespace std;

// LeetCode

int rob(vector<int>& nums, int n, int index) {

	// base case
	if (index >= n)	return 0;

	// include
	int include = nums[index] + rob(nums, n, index + 2);
	// exclude
	int exclude = rob(nums, n, index + 1);

	return max(include, exclude);
}

int main() {
	vector<int> arr{ 2, 7, 9, 3, 1 };
	int n = 5, index = 0;

	cout << rob(arr, n, index);

	return 0;
}