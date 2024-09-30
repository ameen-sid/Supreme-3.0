#include<iostream>
using namespace std;

int main() {

	// Integer --> Stack Memory
	int a = 5;
	cout << a << endl;

	// Integer --> Heap Memory
	int* ptr = new int;
	*ptr = 5;
	cout << *ptr << endl;
	// Don't forget to delete the memory to avoid memory leak
	delete ptr;



	// Array --> Stack Memory
	int arr[50] = { 0 };
	cout << arr[0] << arr[1] << arr[2] << endl;

	// Array --> Heap Memory
	int* prr = new int[50];
	cout << prr[0] << prr[1] << prr[2] << endl;
	// Don't forget to delete the memory to avoid memory leak
	delete[] prr;



	// 2D Array --> Stack Memory
	int brr[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	// 2D Array --> Heap Memory
	int** crr = new int* [4];

	for (int i = 0; i < 4; i++) {
		// har pointer ke liye ek 1D array create karna hai
		crr[i] = new int[3];
	}

	// Taking input
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> crr[i][j];
		}
	}

	// Printing 
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			cout << crr[i][j];
		}
		cout << endl;
	}

	// delete
	for (int i = 0; i < 4; i++) {
		delete[] crr[i];
	}

	return 0;
}