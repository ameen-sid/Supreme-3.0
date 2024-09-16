#include<iostream>
using namespace std;

int getLength(char arr[], int size) {

	int count = 0;
	int index = 0;
	while (arr[index] != '\0') {
		count++;
		index++;
	}

	return count;
}

int main() {
	char arr[100];

	cout << "Enter your name: ";
	cin.getline(arr, 100);

	cout << "The length of the char array is: " << getLength(arr, 100);

	return 0;
}