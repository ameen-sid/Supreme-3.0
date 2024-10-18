#include<bits/stdc++.h>
using namespace std;

// LeetCode

int solve(vector<int>& nums, int s, int e) {

	// base case
	if (s > e)	return 0;

	// recursive call
	int include = nums[s] + solve(nums, s + 2, e);
	int exclude = solve(nums, s + 1, e);

	return max(include, exclude);
}

int rob(vector<int>& nums) {

	int s = 0, e = nums.size() - 1;
	return solve(nums, s, e);
}

int main() {
	vector<int> arr{ 1, 2, 3, 1 };

	cout << rob(arr) << endl;

	return 0;
}