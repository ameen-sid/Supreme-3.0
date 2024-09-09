// Debug the code. Search in sorted rotated array. (Sorting was less to high).

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>& nums, int target) {

	int l = 0, r = nums.size() - 1;
	while (l <= r) {

		int mid = l + (r - l) / 2;
		if (nums[mid] == target) return mid;
		else if (nums[l] <= nums[mid]) {
			if (nums[l] <= target && target < nums[mid]) r = mid - 1;
			else l = mid + 1;
		}
		else {
			if (nums[mid] < target && target <= nums[r]) l = mid + 1;
			else r = mid - 1;
		}
	}
	return -1;
}

int main() {
	vector<int> arr{ 4, 5, 6, 7, 0, 1, 2 };
	int target = 0;

	if (search(arr, target) == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element found at index: " << search(arr, target) << endl;

	return 0;
}