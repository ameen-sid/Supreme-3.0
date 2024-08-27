#include<iostream>
#include<vector>
using namespace std;

// LeetCode

int singleNumber(vector<int>& nums) {

	int ans = 0;
	for (int i = 0; i < nums.size(); i++)
		ans = ans ^ nums[i];

	return ans;
}

int main() {
	vector<int> arr{ 2, 4, 5, 7, 4, 2, 5 };

	cout << "Single Number: " << singleNumber(arr);

	return 0;
}