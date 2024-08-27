#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// LeetCode

int missingNumber(vector<int>& nums) {

	int ans = 0;

	// xor all values of 1 to n
	for (int i = 0; i <= nums.size(); i++)
		ans ^= i;

	// xor all values of array
	for (int i = 0; i < nums.size(); i++)
		ans ^= nums[i];

	return ans;
}

int missingNumber2(vector<int>& nums) {

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {
		if (i != nums[i])	return i;
	}
	return nums.size();
}

int main() {
	vector<int> arr{ 9, 6, 4, 2, 3, 5, 7, 0, 1 };

	// cout << "The Missing Number: " << missingNumber2(arr);	// TC: (N logN)
	cout << "The Missing Number: " << missingNumber(arr);	// TC: (N)

	return 0;
}