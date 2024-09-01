#include<iostream>
// including map stl library
#include<map>
// including unordered_map stl library
#include<unordered_map>
using namespace std;

int main() {

	// Declaration:
	unordered_map<string, string> table;
	// map<string, string> table;

	// --------------------------------------------------------- //

	// Initialization:
	unordered_map<string, string> km{
		{"1", "1km"},
		{"2", "2km"},
		{"3", "3km"},
	};

	// --------------------------------------------------------- //

	// Member Functions:

	// insert()
	table.insert(make_pair("en", "England"));

	pair<string, string> p;
	p.first = "br";
	p.second = "Brazil";
	table.insert(p);

	table["in"] = "India";


	// size()
	cout << "Size: " << table.size() << endl;

	// empty()
	if (table.empty() == true)
		cout << "Map is empty" << endl;
	else
		cout << "Map is not empty" << endl;


	// begin()
	pair<string, string> begin = *(table.begin());
	cout << "Begin element: " << begin.first << " " << begin.second << endl;

	// end()
	// pair<string, string> end = *(table.end());
	// cout << "End element: " << end.first << " " << end.second << endl;


	// operator[]
	cout << "table['in']: " << table["in"] << endl;
	cout << "table['en']: " << table["en"] << endl;

	table["in"] = "Indonesia";
	cout << "after assign new value table['in']: " << table["in"] << endl;

	// at()
	cout << "table.at('in'): " << table.at("in") << endl;
	cout << "table.at('en'): " << table.at("en") << endl;

	table.at("in") = "India";
	cout << "after assign new value table.at('in'): " << table.at("in") << endl;

	// find()
	if (table.find("in") != table.end())
		cout << "key found" << endl;
	else
		cout << "key not found" << endl;

	// count()
	if (table.count("in") == 0)
		cout << "key not found" << endl;
	else
		cout << "key found" << endl;


	// erase()
	table.erase(table.begin(), table.end());
	cout << "after erase: " << table.size() << endl;

	// clear()
	table.clear();
	cout << "Size after clear: " << table.size() << endl;


	// --------------------------------------------------------- //

	// Traversing deque using iterator

	// create an iterator
	unordered_map<string, string>::iterator it;

	it = km.begin();
	while (it != km.end()) {
		pair<string, string> p = *it++;
		cout << p.first << " " << p.second << endl;
	}
	cout << endl;


	return 0;
}