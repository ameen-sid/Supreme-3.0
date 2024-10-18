// Debug the code.

/*
	Example:
		xxab --> xab
*/

#include<iostream>
using namespace std;

void removeConsecutiveDuplicates(char* input) {

	if (input[0] == '\0') {
		return;
	}
	if (input[0] == input[1]) {
		int i = 2;
		for (;input[i] != '\0';i++) {
			input[i - 1] = input[i];
		}
		input[i - 1] = input[i];
		removeConsecutiveDuplicates(input);
	}
	else
		removeConsecutiveDuplicates(input + 1);
}

int main() {
	char input[100] = "xxab";

	removeConsecutiveDuplicates(input);
	cout << input << endl;

	return 0;
}