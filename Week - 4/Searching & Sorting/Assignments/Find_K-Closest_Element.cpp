#include<iostream>
#include<vector>
using namespace std;

// LeetCode

int lowerBound(vector<int>& arr, int x) {

	int start = 0;
	int end = arr.size() - 1;
	int ans = end;
	while (start <= end) {

		int mid = start + (end - start) / 2;
		if (arr[mid] >= x) {
			ans = mid;
			end = mid - 1;
		}
		else if (x > arr[mid])	start = mid + 1;
		else	end = mid - 1;
	}
	return ans;
}

vector<int> findClosestElements(vector<int>& arr, int k, int x) {

	// lower bound
	int high = lowerBound(arr, x);
	int low = high - 1;
	while (k--) {

		if (low < 0)	high++;
		else if (high >= arr.size())	low--;
		else if (x - arr[low] > arr[high] - x)	high++;
		else	low--;
	}

	return vector<int>(arr.begin() + low + 1, arr.begin() + high);
}

vector<int> findClosestElements2(vector<int>& arr, int k, int x) {

	int low = 0;
	int high = arr.size() - 1;
	while (high - low >= k) {

		if (x - arr[low] > arr[high] - x)	low++;
		else	high--;
	}

	// vector<int> ans;
	// for (int i = low; i <= high; i++)	ans.push_back(arr[i]);

	return vector<int>(arr.begin() + low, arr.begin() + high);
}

// sort with respect to difference

int main() {
	vector<int> arr{ 12, 16, 22, 30, 35, 39, 42, 48, 50, 53, 55, 56 };
	int k = 4;
	int x = 35;

	// vector<int> ans = findClosestElements(arr, k, x);	// TC:O(N)
	vector<int> ans = findClosestElements(arr, k, x);	// TC:O(N)

	cout << "K Closest Elements are: ";
	for (auto i : ans)
		cout << i << " ";
	cout << endl;

	return 0;
}