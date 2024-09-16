// Debug the code.

#include<iostream>
using namespace std;

void reverseString(string& str, int n, int start) {

	for (int i = start, j = n - 1 + start; i < j; i++, j--) {
		swap(str[i], str[j]);
	}
}

void reverseEachWord(string& str) {

	int start = 0, count = 1, i = 0;
	while (i < str.size()) {

		i++;
		count++;
		if (str[i] == ' ' || str[i] == '\0') {

			reverseString(str, count - 1, start);
			start = i + 1;
			count = 0;
		}
	}
}

int main() {
	string str = "Hello my name is sid";

	reverseEachWord(str);

	for (auto s : str)
		cout << s;
	cout << endl;

	return 0;
}