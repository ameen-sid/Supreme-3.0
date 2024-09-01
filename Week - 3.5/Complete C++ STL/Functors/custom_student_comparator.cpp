#include<iostream>
#include<algorithm>
#include<vector>
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

class comparator {
public:
	bool operator()(Student a, Student b) {
		if (a.marks == b.marks)
			return a.name < b.name;

		return a.marks < b.marks;
	}
};

int main() {

	vector<Student> arr;
	arr.push_back(Student(90, "love"));
	arr.push_back(Student(95, "lakshay"));
	arr.push_back(Student(95, "kunal"));

	sort(arr.begin(), arr.end(), comparator());

	for (Student i : arr)
		cout << i.marks << " " << i.name << endl;


	return 0;
}