#include<iostream>
using namespace std;

void replaceChar(char arr[], char originalChar, char newChar) {

	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == originalChar)
			arr[i] = newChar;
	}
}

int main() {
	char arr[100] = "My@Name@is@Ameen@Sid";

	replaceChar(arr, '@', ' ');

	cout << arr << endl;

	return 0;
}