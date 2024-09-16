#include<iostream>
using namespace std;

int main() {

	// Creation
	string str;

	// input from user
	cout << "Enter any string: ";
	// cin >> str;
	getline(cin, str, 'A');

	cout << "str: " << str << endl;



	// Member Functions

	str = "";

	// push_back()
	str.push_back('S');
	str.push_back('i');
	str.push_back('d');
	str.push_back('!');
	cout << "str: " << str << endl;

	// pop_back()
	str.pop_back();
	cout << "str: " << str << endl;


	string name = "String";

	// length()
	cout << name.length() << endl;

	// []
	cout << name[0] << endl;

	// at()
	cout << name.at(0) << endl;

	// front()
	cout << name.front() << endl;

	// back()
	cout << name.back() << endl;

	// Iterate over string using the iterator
	auto it = name.begin();
	while (it != name.end())
		cout << *it++ << " ";
	cout << endl;


	// clear()
	name.clear();

	// empty()
	if (name.empty())
		cout << "String is empty" << endl;
	else
		cout << "String is not empty" << endl;


	// +
	string first = "First";
	string second = "Second";

	string ans = first + " " + second;
	cout << ans << endl;


	// substr()
	string strr = "Hello Ji Kese Ho Saare";
	cout << strr.substr(0, 5) << endl;

	// find()
	cout << strr.find("Kese") << endl;

	if (strr.find("Kese") != string::npos)
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	// compare()
	string s1 = "love";
	string s2 = "amit";

	cout << s1.compare(s2) << endl;


	return 0;
}