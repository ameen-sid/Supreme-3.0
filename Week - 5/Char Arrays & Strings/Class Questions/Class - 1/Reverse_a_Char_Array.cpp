#include<iostream>
using namespace std;

int getLength(char arr[]) {

	int count = 0;
	int index = 0;
	while (arr[index] != '\0') {
		count++;
		index++;
	}

	return count;
}


void reverseCharArray(char arr[]) {

	int i = 0;
	int j = getLength(arr) - 1;
	while (i < j)	swap(arr[i++], arr[j--]);
}

int main() {
	char arr[100] = "ameensid";

	reverseCharArray(arr);

	cout << arr << endl;

	return 0;
}