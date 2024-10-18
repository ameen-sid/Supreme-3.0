#include<bits/stdc++.h>
using namespace std;

// LeetCode

bool solve(vector<int>& nums, int index, int destination) {

	// base case
	if (index == destination)	return true;
	if (index > destination || nums[index] == 0)	return false;

	// processing
	bool recAns = false;
	for (int jump = 1; jump <= nums[index]; jump++) {

		// recursice call
		recAns = recAns || solve(nums, index + jump, destination);
	}

	return recAns;
}

bool canJump(vector<int>& nums) {

	int destination = nums.size() - 1;
	return solve(nums, 0, destination);
}

int main() {
	vector<int> arr{ 2, 3, 1, 1, 4 };

	cout << canJump(arr) << endl;

	return 0;
}