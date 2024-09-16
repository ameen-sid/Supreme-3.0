#include<bits/stdc++.h>
using namespace std;

// LeetCode

int garbageCollection(vector<string>& garbage, vector<int>& travel) {

	// P truck
	int pickP, travelP, lastHouseP;
	pickP = travelP = lastHouseP = 0;

	// M truck
	int pickM, travelM, lastHouseM;
	pickM = travelM = lastHouseM = 0;

	// G truck
	int pickG, travelG, lastHouseG;
	pickG = travelG = lastHouseG = 0;


	// let's travel to the street of houses
	for (int i = 0; i < garbage.size(); i++) {

		// ith House
		string currHouse = garbage[i];
		// let dive into the current house and see the type of garbage present
		for (int j = 0; j < currHouse.length(); j++) {

			char garbageType = currHouse[j];
			if (garbageType == 'P') {
				pickP++;
				// yha tk toh mera P truck pakka aaya h, toh let's store it
				lastHouseP = i;
			}
			else if (garbageType == 'M') {
				pickM++;
				lastHouseM = i;
			}
			else if (garbageType == 'G') {
				pickG++;
				lastHouseG = i;
			}
		}
	}

	// let's calculate travel time for P
	for (int i = 0; i < lastHouseP; i++)	travelP += travel[i];

	// let's calculate travel time for M
	for (int i = 0; i < lastHouseM; i++)	travelM += travel[i];

	// let's calculate travel time for G
	for (int i = 0; i < lastHouseG; i++)	travelG += travel[i];

	int totalPickingTime = pickP + pickM + pickG;
	int totalTravelTime = travelP + travelM + travelG;

	int totalTime = totalPickingTime + totalTravelTime;

	return totalTime;
}

int main() {
	vector<string> garbage{ "G", "P", "GP", "GG" };
	vector<int> travel{ 2, 4, 3 };

	cout << "Total Time: " << garbageCollection(garbage, travel) << endl;

	return 0;
}