#include<iostream>
#include<unordered_map>
using namespace std;

// GFG

int firstRepeated(int arr[], int n) {

	unordered_map<int, int>hash;

	for (int i = 0; i < n; i++)
		hash[arr[i]]++;

	for (int i = 0; i < n; i++) {
		if (hash[arr[i]] > 1)
			return i + 1;
	}
	return -1;
}

int firstRepeated2(int arr[], int n) {

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j])
				return i + 1;
		}
	}
	return -1;
}

int main() {
	int arr[] = { 1, 5, 3, 4, 3, 5, 6 };
	int size = 7;

	// cout << "The First Repeating Element: " << firstRepeated2(arr, size);	// TC: O(N^2)
	cout << "The First Repeating Element: " << firstRepeated(arr, size);	// TC: O(N) + SC: O(N)

	return 0;
}