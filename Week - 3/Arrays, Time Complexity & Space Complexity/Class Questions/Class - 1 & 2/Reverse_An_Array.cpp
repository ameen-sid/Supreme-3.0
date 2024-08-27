#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int brr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = 10;

	cout << "Print Array before reversing:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Method - 1 (Custom Reverse Code)
	int start = 0;
	int end = size - 1;
	while (start < end)
		swap(arr[start++], arr[end--]);

	cout << "Print Array after reversing:" << endl;
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// Method - 2 (STL Function)
	reverse(brr, brr + size);

	cout << "Print Array after reversing:" << endl;
	for (int i = 0; i < size; i++) {
		cout << brr[i] << " ";
	}
	cout << endl;


	return 0;
}