#include<iostream>
#include<vector>
using namespace std;

// LeetCode

double findMaxAverage(vector<int>& nums, int k) {

	// defining window size:
	int i = 0;
	int j = k - 1;

	int sum = 0;

	// calculating the sum of first window:
	for (int y = i; y <= j; y++)
		sum += nums[y];

	int maxSum = sum;
	j++;

	while (j < nums.size()) {
		sum -= nums[i++];
		sum += nums[j++];

		if (maxSum < sum)	maxSum = sum;
	}
	return (double)maxSum / k;
}

double findMaxAverage2(vector<int>& nums, int k) {

	double maxSum = INT16_MIN;

	int i = 0;
	int j = k - 1;
	while (j < nums.size()) {

		int sum = 0;
		for (int y = i; y <= j; y++)
			sum += nums[y];

		// maxSum = max(sum, maxSum);
		if (maxSum < sum)	maxSum = sum;

		i++;
		j++;
	}
	return maxSum / k;
}

int main() {
	vector<int> arr{ 1, 12, -5, -6, 50, 3 };
	int k = 4;

	// cout << "The Maximum Average of Subarray: " << findMaxAverage2(arr, k);	// TC: O(N^2)
	cout << "The Maximum Average of Subarray: " << findMaxAverage(arr, k);	// TC: O(N)

	return 0;
}