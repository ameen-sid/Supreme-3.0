#include<iostream>
using namespace std;

// GeeksForGeeks

int setKthBit(int N, int K) {
	return N | (1 << K);
}

int main() {
	int n, k;

	cout << "Enter the value of n and k: ";
	cin >> n >> k;

	cout << "The Answer is after setting the " << k << "th bit: " << setKthBit(n, k);

	return 0;
}