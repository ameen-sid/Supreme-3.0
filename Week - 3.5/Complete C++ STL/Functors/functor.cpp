#include<iostream>
using namespace std;

class functorOne {
public:
	bool operator()(int a, int b) {
		// compare in descending order
		return a > b;
	}
};

int main() {

	functorOne cmp;

	if (cmp(10, 5) == true)
		cout << "10 is greater than 5" << endl;
	else
		cout << "10 is less than 5" << endl;


	return 0;
}