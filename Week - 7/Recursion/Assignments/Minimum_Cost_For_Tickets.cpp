#include<bits/stdc++.h>
using namespace std;

// LeetCode

int getIndexPosition(vector<int>& days, int index, int day) {

	// 7 days
	if (day == 7) {

		int currDay = days[index];
		currDay = currDay + 7;
		while (days[index] < currDay && index < days.size())	index++;
	}
	// 30 days
	else {

		int currDay = days[index];
		currDay = currDay + 30;
		while (days[index] < currDay && index < days.size())	index++;
	}

	return index;
}

// Another Approach
int solve2(vector<int>& days, int index, vector<int>& costs) {

	// base case
	if (index >= days.size())	return 0;

	// processing
	// 1 day case
	int cost1 = costs[0] + solve2(days, index + 1, costs);

	// 7 days case
	int j = index;
	int currDay = days[j] + 7;
	while (days[j] < currDay && j < days.size())	j++;
	int indexPos = j;
	int cost2 = costs[1] + solve2(days, indexPos, costs);

	// 30 days case
	j = index;
	currDay = days[j] + 30;
	while (days[j] < currDay && j < days.size())	j++;
	indexPos = j;
	int cost3 = costs[2] + solve2(days, indexPos, costs);

	return min(cost1, min(cost2, cost3));
}

int solve(vector<int>& days, int index, vector<int>& costs) {

	// base case
	if (index >= days.size())	return 0;

	// processing
	int mini = INT_MAX;

	// 1 day case
	mini = min(mini, costs[0] + solve(days, index + 1, costs));

	// 7 days case
	int indexPos = getIndexPosition(days, index, 7);
	mini = min(mini, costs[1] + solve(days, indexPos, costs));

	// 30 days case
	indexPos = getIndexPosition(days, index, 30);
	mini = min(mini, costs[2] + solve(days, indexPos, costs));

	return mini;
}

int mincostTickets(vector<int>& days, vector<int>& costs) {
	return solve(days, 0, costs);
}

int main() {
	vector<int> days{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31 };
	vector<int> costs{ 2, 7, 15 };

	cout << mincostTickets(days, costs) << endl;

	return 0;
}