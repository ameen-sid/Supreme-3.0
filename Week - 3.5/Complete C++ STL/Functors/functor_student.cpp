#include<iostream>
using namespace std;

class Student {
public:
	int marks;
	string name;

	Student(int m, string n) {
		this->marks = m;
		this->name = n;
	}
};

class StudentComparator {
public:
	bool operator()(Student a, Student b) {
		return a.marks < b.marks;
	}
};

int main() {

	Student s1(93, "babbar");
	Student s2(97, "lakshay");

	StudentComparator cmp;

	if (cmp(s1, s2))
		cout << "babbar marks is less than lakshay marks" << endl;
	else
		cout << "lakshay marks is less than babbar marks" << endl;


	return 0;
}