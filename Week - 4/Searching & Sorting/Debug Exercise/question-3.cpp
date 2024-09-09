// Debug the code. Find minimum in rotated sorted array. (Sorting was in ascending order).

#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int>& nums) {

	int start = 0, end = nums.size() - 1, ans = start;
	while (nums[start] > nums[end]) {

		int mid = (start + end) >> 1;
		if (nums[mid] <= nums[start] && nums[mid] <= nums[end])
			end = mid;
		else if (nums[mid] >= nums[start] && nums[mid] >= nums[end])
			start = mid + 1;
		else return nums[mid];
		ans = start;
	}
	return nums[ans];
}

int main() {
	vector<int> nums = { 3, 4, 5, 1, 2 };

	cout << findMin(nums);

	return 0;
}