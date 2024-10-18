#include<bits/stdc++.h>
using namespace std;

// LeetCode

bool solve(vector<int>& nums, int target, int index) {

	// base case
	if (target == 0)	return true;
	if (target < 0 || index >= nums.size())	return false;

	bool include = solve(nums, target - nums[index], index + 1);
	bool exclude = solve(nums, target, index + 1);

	return include || exclude;
}

bool canPartition(vector<int>& nums) {

	int sum = accumulate(nums.begin(), nums.end(), 0);
	if (sum & 1)	return false;

	int target = sum >> 1;
	return solve(nums, target, 0);
}

int main() {
	vector<int> arr{ 1, 5, 11, 5 };

	cout << canPartition(arr) << endl;

	return 0;
}