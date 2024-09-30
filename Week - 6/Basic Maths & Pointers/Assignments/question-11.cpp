#include<iostream>
using namespace std;

int main() {
	int a[3] = { 1, 2, 3 };

	cout << *(a + 2);
	// Output: 3

	return 0;
}