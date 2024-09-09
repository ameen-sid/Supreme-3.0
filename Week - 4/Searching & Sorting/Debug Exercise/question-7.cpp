// Debug the code.

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {

	int left = 0, right = nums.size() - 1;
	while (left <= right) {

		int mid = left + (right - left) / 2;
		if (nums[mid] == target)
			return mid;
		if (nums[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int main() {
	vector<int> arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int target = 10;

	if (binarySearch(arr, target) == -1)
		cout << "Element not found" << endl;
	else
		cout << "Element found at index: " << binarySearch(arr, target) << endl;

	return 0;
}