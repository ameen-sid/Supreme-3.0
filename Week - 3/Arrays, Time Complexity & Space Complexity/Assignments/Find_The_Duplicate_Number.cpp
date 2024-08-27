#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// LeetCode

int findDuplicate(vector<int>& nums) {

	while (nums[0] != nums[nums[0]])
		swap(nums[0], nums[nums[0]]);

	return nums[0];
}

int findDuplicate2(vector<int>& nums) {

	for (int i = 0; i < nums.size(); i++) {

		int index = abs(nums[i]);

		// already visited?
		if (nums[index] < 0)	return index;

		// mark visited
		nums[index] *= -1;
	}
	return -1;
}

int findDuplicate3(vector<int>& nums) {

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size() - 1; i++) {

		if (nums[i] == nums[i + 1])
			return nums[i];
	}
	return -1;
}

int main() {
	vector<int> arr{ 1, 3, 4, 2, 2 };

	// cout << "The Duplicate Number: " << findDuplicate3(arr);	// TC: O(N logN)
	// cout << "The Duplicate Number: " << findDuplicate2(arr);	// TC: O(N)
	cout << "The Duplicate Number: " << findDuplicate(arr);	// TC: O(N)

	return 0;
}