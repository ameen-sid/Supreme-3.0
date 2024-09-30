#include<iostream>
using namespace std;

int main() {
	int a = 7;

	int* c = &a;	// 400

	c = c + 3;

	cout << c << endl;
	// Output: 412

	return 0;
}