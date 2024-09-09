#include<bits/stdc++.h>
using namespace std;

// GFG

bool isPossibleSol(vector<int>& stalls, int k, int mid) {

	int count = 1;
	int pos = stalls[0];
	for (int i = 1; i < stalls.size(); i++) {

		if (stalls[i] - pos >= mid) {

			count++;
			pos = stalls[i];
		}

		if (count == k)	return true;
	}

	return false;
}

int solve(vector<int>& stalls, int n, int k) {

	sort(stalls.begin(), stalls.end());

	int start = 0;
	int end = stalls[n - 1] - stalls[0];

	int ans = -1;
	while (start <= end) {

		int mid = start + ((end - start) >> 1);
		if (isPossibleSol(stalls, k, mid)) {

			ans = mid;
			start = mid + 1;
		}
		else {

			end = mid - 1;
		}
	}

	return ans;
}

int main() {
	vector<int> stalls{ 1, 2, 4, 8, 9 };
	int size = stalls.size();
	int cows = 3;

	cout << "Min Distance: " << solve(stalls, size, cows) << endl;

	return 0;
}