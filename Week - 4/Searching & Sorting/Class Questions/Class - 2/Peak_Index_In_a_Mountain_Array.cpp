#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// LeetCode

int peakIndexInMountainArray(vector<int>& nums) {

	int n = nums.size();

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start < end) {

		if (nums[mid] < nums[mid + 1]) {
			// move to right
			start = mid + 1;
		}
		else {
			// on the answer or line b
			end = mid;
		}
		mid = start + ((end - start) / 2);
	}
	return start;
}

int main() {
	vector<int> mountain{ 0, 2, 1, 0 };

	cout << "Peak Element: " << peakIndexInMountainArray(mountain) << endl; // TC: O(LogN)

	return 0;
}