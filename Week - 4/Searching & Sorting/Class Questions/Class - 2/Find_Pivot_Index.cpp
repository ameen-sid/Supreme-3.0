#include<iostream>
#include<vector>
using namespace std;

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

int main() {
	vector<int> arr{ 4, 5, 6, 7, 0, 1, 2, 3 };

	cout << "Pivot Index: " << findPivot(arr) << endl;

	return 0;
}