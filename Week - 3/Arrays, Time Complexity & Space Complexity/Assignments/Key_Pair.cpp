#include<iostream>
#include<algorithm>
using namespace std;

// GFG

bool hasArrayTwoCandidates(int arr[], int n, int x) {

	sort(arr, arr + n);

	int i = 0;
	int j = n - 1;
	while (i < j) {

		if (arr[i] + arr[j] == x)
			return true;
		else if (arr[i] + arr[j] < x)
			i++;
		else
			j--;
	}
	return false;
}

int main() {
	int arr[6] = { 1, 4, 45, 6, 10, 8 };
	int n = 6;
	int x = 16;

	if (hasArrayTwoCandidates(arr, n, x))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}