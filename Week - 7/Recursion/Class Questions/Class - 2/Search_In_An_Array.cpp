#include<iostream>
using namespace std;

bool search(int arr[], int index, int n, int target) {

	// base case
	// 2 base case -> found / not found
	if (index >= n)	return false;

	// processing or can be base case
	if (arr[index] == target)	return true;
	// recursive call
	else return search(arr, index + 1, n, target);
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 10, i = 0;
	int k = 9;

	if (search(arr, i, n, k))	cout << "Found";
	else	cout << "Not Found";

	return 0;
}