// Debug the code. In this question, if there is no error, remove the bad practices.

#include<iostream>
using namespace std;

int main() {
	int* ptr = 0;

	int a = 5;
	ptr = &a;

	cout << *ptr << endl;

	return 0;
}