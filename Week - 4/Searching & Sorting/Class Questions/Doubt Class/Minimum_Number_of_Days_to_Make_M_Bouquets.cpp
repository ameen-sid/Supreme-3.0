#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// LeetCode

bool canWeMakeBouquetsWithDDays(vector<int>& bloomDay, int m, int k, int D) {

	int counter = 0;
	for (int i = 0; i < bloomDay.size(); i++) {
		// check if the flower is bloomed or not
		if (bloomDay[i] <= D) {
			// bloom ho gya hoga
			counter++;
		}

		if (counter == k) {
			m--;	// i can make a bouquet
			counter = 0;

			if (m == 0)	break;
		}

		// not bloomed case
		if (bloomDay[i] > D)
			counter = 0;
	}
	return m == 0; // were you able to make M bouquets
}

int minDays(vector<int>& bloomDay, int m, int k) {

	double requirement = (double)m * (double)k;
	if (bloomDay.size() < requirement)	return -1;

	int start = *min_element(bloomDay.begin(), bloomDay.end());	// at least one flower is bloomed
	int end = *max_element(bloomDay.begin(), bloomDay.end());	// all flowers are bloomed

	int ans = -1;

	while (start <= end) {

		int mid = start + (end - start) / 2;
		if (canWeMakeBouquetsWithDDays(bloomDay, m, k, mid)) {
			ans = mid;
			end = mid - 1;
		}
		else {
			start = mid + 1;
		}
	}
	return ans;
}

int main() {
	vector<int> bloomDay{ 1, 10, 3, 10, 2 };
	int m = 3;
	int k = 1;

	cout << "Minimum Days: " << minDays(bloomDay, m, k);

	return 0;
}