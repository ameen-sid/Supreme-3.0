#include<iostream>
#include<vector>
using namespace std;

// LeetCode

int search(vector<int>& nums, int target) {

	int n = nums.size();

	int start = 0;
	int end = n - 1;
	// int mid = (start + end) / 2;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		if (nums[mid] == target)
			return mid;
		else if (target > nums[mid])
			start = mid + 1;
		else
			end = mid - 1;

		// mid = (start + end) / 2;
		mid = start + ((end - start) / 2);
	}
	return -1;
}

int main() {
	vector<int> arr{ -1, 0, 3, 5, 9, 12 };
	int target = 9;

	if (search(arr, target) == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element is found at index: " << search(arr, target) << endl;

	return 0;
}