#include<iostream>
using namespace std;

int main() {
	double a = 10.54;

	double* d = &a;	// 200

	d = d + 1;

	cout << d << endl;
	// Output: 208

	return 0;
}