#include<iostream>
using namespace std;

int main() {
	char ch[100] = "AmeenSid";
	char* cptr = ch;

	cout << ch << endl;
	cout << &ch << endl;
	cout << ch[0] << endl;
	cout << cptr << endl;
	cout << &cptr << endl;
	cout << *cptr << endl;
	cout << *(cptr + 3) << endl;

	return 0;
}