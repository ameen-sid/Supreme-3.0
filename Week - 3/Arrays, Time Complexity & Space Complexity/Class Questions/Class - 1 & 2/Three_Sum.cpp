#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

// LeetCode

vector< vector<int> > threeSum(vector<int>& nums) {

	vector< vector<int> > ans;

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {

		// remove duplicates:
		if (i != 0 && nums[i] == nums[i - 1])
			continue;

		// moving 2 pointers:
		int j = i + 1;
		int k = nums.size() - 1;
		while (j < k) {

			int sum = nums[i] + nums[j] + nums[k];
			if (sum < 0) {
				j++;
			}
			else if (sum > 0) {
				k--;
			}
			else {

				vector<int> temp = { nums[i], nums[j], nums[k] };
				ans.push_back(temp);

				j++;
				k--;

				// skip the duplicates:
				while (j < k && nums[j] == nums[j - 1]) j++;
				while (j < k && nums[k] == nums[k + 1]) k--;
			}
		}
	}
	return ans;
}

vector< vector<int> > threeSum3(vector<int>& nums) {

	set< vector<int> > st;

	sort(nums.begin(), nums.end());

	for (int i = 0; i < nums.size(); i++) {

		int j = i + 1;
		int k = nums.size() - 1;
		while (j < k) {

			if (nums[i] + nums[j] + nums[k] == 0) {

				vector<int> temp;
				temp.push_back(nums[i]);
				temp.push_back(nums[j]);
				temp.push_back(nums[k]);

				sort(temp.begin(), temp.end());

				st.insert(temp);

				j++;
				k--;
			}
			else if (nums[i] + nums[j] + nums[k] > 0)
				k--;
			else
				j++;
		}
	}

	vector< vector<int> > ans(st.begin(), st.end());
	return ans;
}

vector< vector<int> > threeSum2(vector<int>& nums) {

	vector< vector<int> > ans;

	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			for (int k = j + 1; k < nums.size(); k++) {
				if (nums[i] + nums[j] + nums[k] == 0) {
					vector<int> temp;
					temp.push_back(nums[i]);
					temp.push_back(nums[j]);
					temp.push_back(nums[k]);

					ans.push_back(temp);
				}
			}
		}
	}

	return ans;
}

void checkThreeSum(vector<int> arr, int target) {

	for (int i = 0; i < arr.size(); i++) {
		for (int j = i + 1; j < arr.size(); j++) {
			for (int k = j + 1; k < arr.size(); k++) {
				if (arr[i] + arr[j] + arr[k] == 0) {
					cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "]" << endl;
				}
			}
		}
	}
}

int main() {
	vector<int> arr{ -1, 0, 1, 2, -1, -4 };

	// vector< vector<int> > ans = threeSum(arr);

	// for (int i = 0; i < ans.size(); i++) {
	// 	cout << "[";
	// 	for (int value : ans[i]) {
	// 		cout << value << ", ";
	// 	}
	// 	cout << "]" << endl;
	// }

	checkThreeSum(arr, 0);

	return 0;
}