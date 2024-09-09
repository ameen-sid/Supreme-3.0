#include<iostream>
#include<vector>
using namespace std;

// LeetCode

int findPivot(vector<int>& nums) {

	int n = nums.size();

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		// single elememt case
		if (start == end)
			return start;

		if (mid + 1 < n && nums[mid] > nums[mid + 1])
			return mid;
		else if (mid - 1 > 0 && nums[mid] < nums[mid - 1])
			return mid - 1;
		else if (nums[start] > nums[mid])
			end = mid - 1;
		else
			start = mid + 1;

		mid = start + ((end - start) / 2);
	}
	return -1;
}

int binarySearch(int start, int end, vector<int>& nums, int target) {

	while (start <= end) {

		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
			return mid;
		else if (target > nums[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return -1;
}

int search(vector<int>& nums, int target) {

	int pivotIndex = findPivot(nums);

	// line A => index --> 0 to pivotIndex;
	// line B => index --> pivotIndex + 1 to n - 1;

	int n = nums.size();
	int ans = -1;

	// if target lies in line A then search in line A
	if (target >= nums[0] && target <= nums[pivotIndex]) {
		ans = binarySearch(0, pivotIndex, nums, target);
	}
	// if target lies in line B then search in line B
	else {
		ans = binarySearch(pivotIndex + 1, n, nums, target);
	}

	return ans;
}

int main() {
	vector<int> arr{ 4, 5, 6, 7, 0, 1, 2, 3 };
	int target = 7;

	if (search(arr, target) == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element is in the index: " << search(arr, target) << endl;

	return 0;
}