#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
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
		return a.marks < b.marks;
	}
};

int main() {

	// max heap
	priority_queue<int> pq;
	priority_queue<int, vector<int>, less<int> > pq2;

	// min heap
	priority_queue<int, vector<int>, greater<int> > pq3;

	priority_queue<Student, vector<Student>, comparator > pq4;

	pq4.push(Student(90, "love"));
	pq4.push(Student(27, "lakshay"));
	pq4.push(Student(99, "amit"));
	pq4.push(Student(82, "sharma"));

	cout << pq4.top().marks << " " << pq4.top().name << endl;
	pq4.pop();
	cout << pq4.top().marks << " " << pq4.top().name << endl;
	pq4.pop();
	cout << pq4.top().marks << " " << pq4.top().name << endl;
	pq4.pop();
	cout << pq4.top().marks << " " << pq4.top().name << endl;
	pq4.pop();


	return 0;
}