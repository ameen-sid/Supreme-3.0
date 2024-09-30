// Debug the code. You have to make value of *q = 6.

#include <iostream>
using namespace std;

int main() {
	int p = 5;
	int* q = &p;

	(*q)++;

	cout << p << endl;

	return 0;
}