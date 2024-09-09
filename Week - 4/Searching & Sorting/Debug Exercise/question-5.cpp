// Debug the code. Find the length of the longest strictly increasing subsequence.

#include<iostream>
#include<vector>
using namespace std;

int lengthOfLIS(vector<int>& nums) {

	vector<int> ans;
	ans.push_back(nums[0]);

	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] > ans.back())
			ans.push_back(nums[i]);
		else {
			int index = lower_bound(ans.begin(), ans.end(), nums[i]) - ans.begin();
			ans[index] = nums[i];
		}
	}
	return ans.size();
}

int main() {
	vector<int> nums = { 10, 9, 2, 5, 7, 3 };

	cout << lengthOfLIS(nums);

	return 0;
}