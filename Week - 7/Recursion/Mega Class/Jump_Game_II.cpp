#include<bits/stdc++.h>
using namespace std;

// LeetCode

void solve(vector<int>& nums, int index, int dest, int& ans, int step) {

	// base case
	if (index == dest) {

		ans = min(ans, step);
		return;
	}
	if (index > dest)	return;

	// processing
	for (int jump = 1; jump <= nums[index]; jump++) {

		// recursive call
		solve(nums, index + jump, dest, ans, step + 1);
	}
}

int jump(vector<int>& nums) {

	int destination = nums.size() - 1;
	int ans = INT_MAX;
	solve(nums, 0, destination, ans, 0);

	return ans;
}

int main() {
	vector<int> arr{ 2, 3, 1, 1, 4 };

	cout << jump(arr) << endl;

	return 0;
}