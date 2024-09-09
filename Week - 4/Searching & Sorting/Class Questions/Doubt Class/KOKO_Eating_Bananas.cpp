#include<iostream>
#include<vector>
#include<algorithm>
#include <math.h>
using namespace std;

// LeetCode

bool canKokoFinishBananasWithKSpeed(vector<int>& piles, int h, int k) {

	long long int totalHoursTakenByKokoToFinishAllBananas = 0;
	for (int i = 0; i < piles.size(); i++)
		totalHoursTakenByKokoToFinishAllBananas += ceil(piles[i] / (double)k);

	return totalHoursTakenByKokoToFinishAllBananas <= h;
}

int minEatingSpeed(vector<int>& piles, int h) {

	int start = 1;
	int end = *max_element(piles.begin(), piles.end());
	// end to mera pakka answer hai

	int ans = 0;

	while (start <= end) {

		int mid = start + (end - start) / 2;
		int k = mid;
		if (canKokoFinishBananasWithKSpeed(piles, h, k)) {
			// koko will finish all bananas without being cought
			ans = k;
			end = mid - 1;
		}
		else
			start = mid + 1;
	}
	return ans;
}

int main() {
	vector<int> piles{ 3, 6, 7, 11 };
	int hours = 8;

	cout << minEatingSpeed(piles, hours) << endl;

	return 0;
}