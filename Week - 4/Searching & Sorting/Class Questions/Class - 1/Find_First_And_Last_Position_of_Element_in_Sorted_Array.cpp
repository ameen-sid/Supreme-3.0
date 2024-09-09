#include<iostream>
#include<vector>
using namespace std;

// LeetCode

void findFirstOccurrence(vector<int>& arr, int n, int target, int& ansIndex) {

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		if (arr[mid] == target) {
			// ans found -> may or maynot be first occurrence
			// store and compute
			ansIndex = mid;
			// check for left
			end = mid - 1;
		}
		else if (target > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;

		mid = start + ((end - start) / 2);
	}
}

void findLastOccurrence(vector<int>& arr, int n, int target, int& ansIndex) {

	int start = 0;
	int end = n - 1;
	int mid = start + ((end - start) / 2);

	while (start <= end) {

		if (arr[mid] == target) {
			// ans found -> may or maynot be first occurrence
			// store and compute
			ansIndex = mid;
			// check for right
			start = mid + 1;
		}
		else if (target > arr[mid])
			start = mid + 1;
		else
			end = mid - 1;

		mid = start + ((end - start) / 2);
	}
}

vector<int> searchRange(vector<int>& nums, int target) {

	int n = nums.size();

	int firstOccurrenceIndex = -1;
	int lastOccurrenceIndex = -1;

	findFirstOccurrence(nums, n, target, firstOccurrenceIndex);
	findLastOccurrence(nums, n, target, lastOccurrenceIndex);

	vector<int> ans;
	ans.push_back(firstOccurrenceIndex);
	ans.push_back(lastOccurrenceIndex);

	return ans;
}

int main() {
	vector<int> arr{ 5, 7, 7, 8, 8, 10 };
	int target = 8;

	vector<int> ans = searchRange(arr, target);
	cout << "First Occurrence index: " << ans[0] << endl;
	cout << "Last Occurrence index: " << ans[1] << endl;

	return 0;
}