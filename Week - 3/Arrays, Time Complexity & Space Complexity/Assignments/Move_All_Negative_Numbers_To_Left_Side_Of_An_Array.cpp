#include<iostream>
using namespace std;

void moveAllNegToLeft(int arr[], int n) {

	int low = 0;
	int high = n - 1;
	while (low < high) {

		if (arr[low] < 0)	low++;
		else if (arr[high] > 0)	high--;
		else	swap(arr[low], arr[high]);
	}
}

int main() {
	int arr[] = { -2, 1, 2, -3, 4, -5, 6, -1, -2, -5 };
	int size = 10;

	cout << "Before:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	moveAllNegToLeft(arr, size);

	cout << "After:\n";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}