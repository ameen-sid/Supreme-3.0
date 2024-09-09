#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// LeetCode

// XOR Method Already Done;

int missingNumber(vector<int>& nums) {

	sort(nums.begin(), nums.end());

	int n = nums.size();

	int ansIndex = -1;
	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		int number = nums[mid];
		int index = mid;
		int diff = number - index;

		if (diff == 0) {
			// ans exist in right
			start = mid + 1;
		}
		else if (diff == 1) {
			// store and compute
			ansIndex = index;
			end = mid - 1;
		}

		// if (mid + 1 < n && nums[mid + 1] - nums[mid] != 1)
		// 	return nums[mid] + 1;
		// else if (mid - 1 >= 0 && nums[mid] - nums[mid - 1] != 1)
		// 	return nums[mid] - 1;
		// else if (nums[mid] - mid == 0)
		// 	start = mid + 1;
		// else if (nums[mid] - mid != 0)
		// 	end = mid - 1;

		mid = start + ((end - start) / 2);
	}

	if (ansIndex == -1)
		return n;

	return ansIndex;
}

int main() {
	vector<int> arr{ 3, 0, 1 };

	cout << "The Missing Number is: " << missingNumber(arr) << endl;

	return 0;
}