#include<iostream>
using namespace std;

int main() {
	int a = 5;
	int* ptrInt = &a;
	cout << sizeof(ptrInt) << endl;

	char c = 'a';
	char* ptrChar = &c;
	cout << sizeof(ptrChar) << endl;

	float f = 1.3;
	float* ptrFloat = &f;
	cout << sizeof(ptrFloat) << endl;

	bool flag = true;
	bool* ptrBool = &flag;
	cout << sizeof(ptrBool) << endl;

	double d = 3.4533;
	double* ptrDouble = &d;
	cout << sizeof(ptrDouble) << endl;

	long long l = 90328343;
	long long* ptrLongLong = &l;
	cout << sizeof(ptrLongLong) << endl;

	return 0;
}