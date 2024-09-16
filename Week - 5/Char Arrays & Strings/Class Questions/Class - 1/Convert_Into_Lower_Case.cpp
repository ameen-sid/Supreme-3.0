#include<iostream>
using namespace std;

void convertIntoLowerCase(char arr[]) {

	for (int i = 0; arr[i] != '\0'; i++) {
		char ch = arr[i];
		if (ch >= 'A' && ch <= 'Z') {
			ch = ch - 'A' + 'a';
			arr[i] = ch;
		}
	}
}

int main() {
	char arr[100] = "MY NAME IS AMEEN SID";

	convertIntoLowerCase(arr);

	cout << arr;

	return 0;
}