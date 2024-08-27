#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// LeetCode

int singleNumber(vector<int>& nums) {

	// frequency table 
	unordered_map<int, int> freqMap;

	// add frequencies to the table
	for (int i = 0; i < nums.size(); i++) {

		int num = nums[i];
		freqMap[num] = freqMap[num] + 1;
	}

	unordered_map<int, int>::iterator it;
	for (it = freqMap.begin(); it != freqMap.end(); it++) {
		if (it->second == 1)
			return it->first;
	}

	return -1;
}

int main() {
	vector<int> arr{ 4, 1, 2, 1, 2 };

	cout << "The Single Number is: " << singleNumber(arr) << endl;

	return 0;
}