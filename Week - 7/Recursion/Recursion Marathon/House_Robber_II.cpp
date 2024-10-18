#include<bits/stdc++.h>
using namespace std;

// LeetCode

int solve(vector<int>& nums, int index, int size) {

	// base case
	if (index >= size)	return 0;

	// chori karlo -> ith index par
	int include = nums[index] + solve(nums, index + 2, size);

	// chori mat karo -> ith index par
	int exclude = 0 + solve(nums, index + 1, size);

	return max(include, exclude);
}

int rob(vector<int>& nums) {

	int n = nums.size();

	// single element case
	if (n == 1)	return nums[0];

	int include = solve(nums, 0, n - 2);
	int exclude = solve(nums, 1, n - 1);

	return 	max(include, exclude);
}

int main() {
	vector<int> arr{ 2, 3, 2 };

	cout << rob(arr) << endl;

	return 0;
}