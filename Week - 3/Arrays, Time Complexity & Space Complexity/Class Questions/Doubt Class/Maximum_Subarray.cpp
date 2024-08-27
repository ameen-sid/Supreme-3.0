#include<iostream>
#include<vector>
using namespace std;

// LeetCode

int maxSubArray(vector<int>& nums) {

	int ans = INT16_MIN;
	int sum = 0;
	for (int i = 0; i < nums.size(); i++) {

		sum += nums[i];
		ans = max(ans, sum);
		if (sum < 0) sum = 0;
	}
	return ans;
}

int maxSubArray2(vector<int>& nums) {

	int ans = INT16_MIN;
	for (int i = 0; i < nums.size(); i++) {

		int sum = 0;
		for (int j = i; j < nums.size(); j++) {

			sum += nums[j];
			ans = max(ans, sum);
		}
	}
	return ans;
}

int main() {
	vector<int> arr{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };

	// cout << "Maximum Subarray: " << maxSubArray2(arr) << endl; // TC: O(N^2) => Brute Force
	cout << "Maximum Subarray: " << maxSubArray(arr) << endl; // TC: O(N) => Kadane's Algorithm

	return 0;
}