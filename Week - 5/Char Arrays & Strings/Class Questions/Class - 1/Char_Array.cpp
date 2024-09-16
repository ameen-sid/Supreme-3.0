#include<iostream>
using namespace std;

int main() {

	// Creation
	char arr[100];

	// Input in single time
	cout << "Enter your name: ";
	// cin >> arr;
	// cin.getline(arr, 100);
	cin.getline(arr, 100, '\t');

	// Output in single time
	cout << "Your name is: " << arr << endl;

	// Output in char by char
	cout << arr[0] << "-> " << (int)arr[0] << endl;
	cout << arr[1] << "-> " << (int)arr[1] << endl;
	cout << arr[2] << "-> " << (int)arr[2] << endl;
	cout << arr[3] << "-> " << (int)arr[3] << endl;	// Null Character

	return 0;
}