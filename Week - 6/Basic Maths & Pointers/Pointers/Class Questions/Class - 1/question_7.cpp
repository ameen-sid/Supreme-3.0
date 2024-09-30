#include<iostream>
using namespace std;

int main() {
	char ch[10] = "RacecaR";
	char* ptr = &ch[0];

	cout << ch << endl;
	cout << &ch << endl;
	cout << *(ch + 3) << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << *(ptr + 3) << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 4 << endl;

	return 0;
}