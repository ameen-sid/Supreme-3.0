#include<bits/stdc++.h>
using namespace std;

// LeetCode

void solve(vector<int>& prices, int index, int& minPrice, int& maxProfit) {

	// base case
	if (index >= prices.size()) {

		return;
	}

	// processing
	minPrice = min(minPrice, prices[index]);
	int todaysProfit = prices[index] - minPrice;
	maxProfit = max(maxProfit, todaysProfit);

	// recursive call
	solve(prices, index + 1, minPrice, maxProfit);
}

int maxProfit(vector<int>& prices) {

	int minPrice = INT_MAX;
	int maxProfit = INT_MIN;

	solve(prices, 0, minPrice, maxProfit);

	return maxProfit;
}

int main() {
	vector<int> prices{ 7, 1, 2, 3, 4, 6, 5 };

	cout << maxProfit(prices) << endl;

	return 0;
}