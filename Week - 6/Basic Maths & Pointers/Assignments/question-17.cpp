#include<iostream>
using namespace std;

int main() {
	char* ptr;

	char Str[] = "abcdefg";

	ptr = Str;
	ptr += 5;

	cout << ptr;
	// Output: fg

	return 0;
}