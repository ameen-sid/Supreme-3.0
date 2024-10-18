#include<bits/stdc++.h>
using namespace std;

// LeetCode

int solve(vector<int>& nums, int index) {

	// base case
	if (index >= nums.size())	return 0;

	// processing + recursive call
	int inclusion = nums[index] + solve(nums, index + 2);
	int exclusion = 0 + solve(nums, index + 1);

	return max(inclusion, exclusion);
}

int rob(vector<int>& nums) {

	return solve(nums, 0);
}

int main() {
	vector<int> arr{ 1, 3, 5, 7, 2, 1 };

	cout << rob(arr) << endl;

	return 0;
}