#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

	int index = 0, i = 1;
	while (i < nums.size()) {

		if (nums[i] == nums[index])	i++;
		else	nums[++index] = nums[i++];
	}
	return index + 1;
}

int main() {
	vector<int> arr{ 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };

	cout << "Print Array Before Removing Duplicates:\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	int k = removeDuplicates(arr);	// TC: O(N)

	cout << "Print Array After Removing Duplicates:\n";
	for (auto i : arr)
		cout << i << " ";
	cout << endl;

	return 0;
}