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

bool isPalindrome(char arr[]) {

	int i = 0;
	int j = getLength(arr) - 1;
	while (i < j) {

		if (arr[i] != arr[j])
			return false;

		i++;
		j--;
	}

	return true;
}

int main() {
	char arr[] = "racecar";

	if (isPalindrome(arr))
		cout << "Palindrome" << endl;
	else
		cout << "Not a Palindrome" << endl;

	return 0;
}