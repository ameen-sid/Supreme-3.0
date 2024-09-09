// Odd Occurring Element

// All elements occurs even number of times except one
// Element repeats itself in pairs
// No pair repeat itself, no number can occur more than 2 times in a single stretch
// Find the element that occur odd times

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// LeetCode

int findOddOccurringElement(vector<int>& arr) {

	int n = arr.size();

	int start = 0;
	int end = n - 1;
	while (start <= end) {

		// single element case
		if (start == end)
			return arr[start];

		int mid = start + (end - start) / 2;

		// bound checking
		int leftValue = -1;
		if (mid - 1 >= 0)
			leftValue = arr[mid - 1];

		int rightValue = -1;
		if (mid + 1 < n)
			rightValue = arr[mid + 1];

		int currentValue = arr[mid];

		// duplicate does not exist
		if (currentValue != leftValue && currentValue != rightValue)
			return arr[mid];

		// duplicate exist in left index
		else if (mid - 1 >= 0 && currentValue == leftValue) {
			int pairStartingIndex = mid - 1;
			if (pairStartingIndex & 1) {
				// pair's starting index is odd
				// i am standing in right part
				end = mid - 1;
			}
			else {
				// pair's starting index is even
				// i am standing in left part
				start = mid + 1;
			}
		}

		// duplicate exist in right index
		else if (mid + 1 < n && currentValue == rightValue) {
			int pairStartingIndex = mid;
			if (pairStartingIndex & 1) {
				// pair's starting index is odd
				// i am standing in right part
				end = mid - 1;
			}
			else {
				// pair's starting index is even
				// i am standing in left part
				start = mid + 1;
			}
		}
	}
	return -1;
}

// Hashmap Method
int findOddOccurringElement3(vector<int>& arr) {

	unordered_map<int, int> table;
	for (int i = 0; i < arr.size(); i++) {

		int num = arr[i];
		table[num] = table[num] + 1;
	}

	for (int i = 0; i < arr.size(); i++) {

		int num = arr[i];
		if (table[num] & 1)
			return num;
	}
}

// XOR Method
int findOddOccurringElement2(vector<int>& arr) {

	int ans = 0;
	for (int i = 0; i < arr.size(); i++)
		ans = ans ^ arr[i];

	return ans;
}

int main() {
	vector<int> arr{ 2, 2, 3, 3, 1 };

	// cout << "The Odd Occurring Element is: " << findOddOccurringElement2(arr) << endl;	// TC: O(N)
	// cout << "The Odd Occurring Element is: " << findOddOccurringElement3(arr) << endl;	// TC: O(N) + SC: O(N)
	cout << "The Odd Occurring Element is: " << findOddOccurringElement(arr) << endl; // TC: O(LogN)

	return 0;
}