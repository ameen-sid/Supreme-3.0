#include<iostream>
#include<vector>
using namespace std;

// LeetCode

vector<int> twoSum(vector<int>& nums, int target) {

	vector<int> ans;

	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			if (nums[i] + nums[j] == target) {
				ans.push_back(nums[i]);
				ans.push_back(nums[j]);
				return ans;
			}
		}
	}
	return ans;
}

void checkTwoSumPrintAllAnswers(int arr[], int n, int target) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] + arr[j] == target) {
				cout << "[" << arr[i] << ", " << arr[j] << "]" << endl;
			}
		}
	}
}

void checkTwoSumUsingArray(int arr[], int n, int target, int ans[]) {

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] + arr[j] == target) {
				ans[0] = arr[i];
				ans[1] = arr[j];
				return;
			}
		}
	}

	ans[0] = -1;
	ans[1] = -1;
	return;
}

pair<int, int> checkTwoSum(int arr[], int n, int target) {

	pair<int, int> ans = make_pair(-1, -1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i] + arr[j] == target) {
				ans.first = arr[i];
				ans.second = arr[j];
				return ans;
			}
		}
	}
	return ans;
}

int main() {
	int arr[] = { 10, 20, 30, 40 };
	int size = 4;
	int target = 60;

	// pair<int, int> ans = checkTwoSum(arr, size, target);	// TC: O(N^2)
	// if (ans.first == -1 && ans.second == -1)
	// 	cout << "Pair Not Found";
	// else
	// 	cout << "Pair Found: " << "[" << ans.first << ", " << ans.second << "]";

	// int ans2[100];
	// checkTwoSumUsingArray(arr, size, target, ans2);	// TC: O(N^2)
	// if (ans2[0] == -1 && ans2[1] == -1)
	// 	cout << "Pair Not Found";
	// else
	// 	cout << "Pair Found: " << "[" << ans2[0] << ", " << ans2[1] << "]";

	checkTwoSumPrintAllAnswers(arr, size, target);

	return 0;
}