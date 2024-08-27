#include<iostream>
using namespace std;

int main() {

	// Different Methods of Swap 

	// 1. Swap In-Built Function Method
	int a = 5, b = 6;

	swap(a, b);

	cout << "a: " << a << " b: " << b << endl;

	// 2. Third Variable Method
	int c = 5, d = 6;

	int temp = c;
	c = d;
	d = temp;

	cout << "c: " << c << " d: " << d << endl;

	// 3. Arithematic Method
	int e = 5, f = 6;

	e = e + f;
	f = e - f;
	e = e - f;

	cout << "e: " << e << " f: " << f << endl;

	// 4. XOR Bitwise Method
	int g = 5, h = 6;

	g = g ^ h;
	h = h ^ g;
	g = g ^ h;

	cout << "g: " << g << " h: " << h << endl;

	return 0;
}