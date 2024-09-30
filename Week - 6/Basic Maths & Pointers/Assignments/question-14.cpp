#include<iostream>
using namespace std;

int main() {
	char b[] = "xyz";

	char* c = &b[0];

	cout << c << endl;
	// Output: xyz

	return 0;
}