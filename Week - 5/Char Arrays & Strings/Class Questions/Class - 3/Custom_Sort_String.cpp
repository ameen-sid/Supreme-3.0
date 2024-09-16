#include<bits/stdc++.h>
using namespace std;

// LeetCode

string orderCopy;

bool cmp(char a, char b) {

	// logic ->
	// order wali string me dekho ke konsa char pehle aana chahiye or konsa badme aana chahiye

	// true -> a will be placed before b
	// false -> b will be placed before a

	// hame sirf order wali string me a and b char kaha, kaise exists kerte hai, same wahi replicate krna hai

	return (orderCopy.find(a) < orderCopy.find(b));
}

string customSortString(string order, string s) {

	orderCopy = order;
	sort(s.begin(), s.end(), cmp);

	return s;
}

int main() {
	string order = "cba";
	string s = "abcd";

	string ans = customSortString(order, s);
	cout << ans << endl;

	return 0;
}