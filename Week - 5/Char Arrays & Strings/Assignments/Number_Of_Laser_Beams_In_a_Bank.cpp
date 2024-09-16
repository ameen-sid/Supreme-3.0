#include<bits/stdc++.h>
using namespace std;

// LeetCode

int countDevices(string& binary) {

	int count = 0;
	for (auto b : binary)	count += b - '0';

	return count;
}

int numberOfBeams(vector<string>& bank) {

	vector<int> devices;
	for (auto row : bank)	devices.push_back(countDevices(row));

	int beams = 0;
	for (int i = 0; i < devices.size(); i++) {

		int j = i + 1;
		while (j < devices.size()) {

			beams += devices[i] * devices[j];
			if (devices[j] == 0)	j++;
			else	break;
		}
	}

	return beams;
}

int main() {
	vector<string> bank = { "011001", "000000", "010100", "001000" };

	cout << numberOfBeams(bank) << endl;

	return 0;
}