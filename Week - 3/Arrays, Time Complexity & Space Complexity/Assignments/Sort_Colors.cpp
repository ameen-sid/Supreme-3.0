#include<iostream>
#include<vector>
using namespace std;

// LeetCode

void sortColors(vector<int>& nums) {

	int low = 0;
	int high = nums.size() - 1;
	int mid = 0;
	while (mid <= high) {

		if (nums[mid] == 0)
			swap(nums[low++], nums[mid++]);
		else if (nums[mid] == 1)
			mid++;
		else
			swap(nums[mid], nums[high--]);
	}
}

int main() {
	vector<int> arr{ 2, 0, 2, 1, 1, 0 };

	cout << "Before:\n";
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;

	sortColors(arr);

	cout << "After:\n";
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}