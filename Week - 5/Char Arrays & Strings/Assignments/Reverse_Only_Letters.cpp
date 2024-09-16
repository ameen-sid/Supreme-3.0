#include<bits/stdc++.h>
using namespace std;

// LeetCode

string reverseOnlyLetters(string s) {

	// Two Pointer Approach
	int low = 0, high = s.size() - 1;
	while (low < high) {

		if (isalpha(s[low]) && isalpha(s[high]))	swap(s[low++], s[high--]);
		else if (!isalpha(s[low]))	low++;
		else	high--;
	}

	return s;
}

int main() {
	string s = "Test1ng-Leet=code-Q!";

	cout << reverseOnlyLetters(s) << endl;	// O(N)

	return 0;
}