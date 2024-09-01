#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class comparator {
public:
	bool operator()(int a, int b) {
		return a > b;
	}
};

int main() {

	vector<int> v;
	v.push_back(20);
	v.push_back(10);
	v.push_back(15);

	// sort in ascending order
	sort(v.begin(), v.end());

	cout << "Ascending order: ";
	for (int i : v)
		cout << i << " ";
	cout << endl;

	// sort in descending order
	sort(v.begin(), v.end(), comparator());

	cout << "Ascending order: ";
	for (int i : v)
		cout << i << " ";
	cout << endl;


	return 0;
}