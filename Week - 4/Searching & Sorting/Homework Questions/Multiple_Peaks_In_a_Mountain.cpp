#include<bits/stdc++.h>
using namespace std;

// LeetCode

// TODO:Incomplete 

int findPeakElement(vector<int>& nums) {

	int n = nums.size();

	// single element case
	if (n == 1)
		return 0;

	// two elements case
	if (n == 2)
		return nums[0] > nums[1] ? 0 : 1;

	int start = 0;
	int end = n - 1;
	int ans = -1;
	while (start <= end) {

		int mid = start + (end - start) / 2;

		// bound checking
		int leftValue = -1;
		if (mid - 1 >= 0)
			leftValue = nums[mid - 1];

		int rightValue = -1;
		if (mid + 1 < n)
			rightValue = nums[mid + 1];

		int currentValue = nums[mid];

		if (currentValue > leftValue && currentValue > rightValue) {
			ans = mid;
			break;
		}
		else if (leftValue > currentValue) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}

int main() {
	vector<int> arr{ 1, 2, 3, 2, 5, 1 };

	cout << "The Peak Element is: " << arr[findPeakElement(arr)] << endl;

	return 0;
}