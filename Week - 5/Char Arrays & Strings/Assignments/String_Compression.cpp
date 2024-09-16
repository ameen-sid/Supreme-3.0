#include<bits/stdc++.h>
using namespace std;

// LeetCode

// Run Length Encoding

int compress(vector<char>& chars) {

	int index = 0, count = 1;
	char prev = chars[0];
	for (int i = 1; i < chars.size(); i++) {

		if (chars[i] == prev)
			count++;
		else {

			chars[index++] = prev;
			if (count > 1) {

				int start = index;
				while (count) {
					chars[index++] = (count % 10) + '0';
					count /= 10;
				}
				reverse(chars.begin() + start, chars.begin() + index);
			}
			prev = chars[i];
			count = 1;
		}
	}

	chars[index++] = prev;
	if (count > 1) {

		int start = index;
		while (count) {
			chars[index++] = (count % 10) + '0';
			count /= 10;
		}
		reverse(chars.begin() + start, chars.begin() + index);
	}

	return index;
}

int main() {
	vector<char> chars = { 'a','a','a','a','b','b','b','b','b','c','c','c','c','d','e','f','f','f','f' };	// O(N)
	int n = compress(chars);

	for (int i = 0; i < n; i++)
		cout << chars[i];
	cout << endl;

	return 0;
}