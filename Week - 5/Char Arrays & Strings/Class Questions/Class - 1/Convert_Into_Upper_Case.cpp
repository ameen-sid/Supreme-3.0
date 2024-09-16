#include<iostream>
using namespace std;

void convertIntoUpperCase(char arr[]) {

	for (int i = 0; arr[i] != '\0'; i++) {
		char ch = arr[i];
		if (ch >= 'a' && ch <= 'z') {
			ch = ch - 'a' + 'A';
			arr[i] = ch;
		}
	}
}

int main() {
	char arr[100] = "My Name is Ameen Sid";

	convertIntoUpperCase(arr);

	cout << arr;

	return 0;
}