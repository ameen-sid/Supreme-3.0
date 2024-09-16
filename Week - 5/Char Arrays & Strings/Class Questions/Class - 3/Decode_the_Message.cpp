#include<bits/stdc++.h>
using namespace std;

// LeetCode

string decodeMessage(string key, string message) {

	// step 1: create mapping
	unordered_map<char, char> mapping;

	char space = ' ';
	mapping[space] = space;

	int index = 0;
	char start = 'a';
	while (start <= 'z' && index < key.length()) {

		char currChar = key[index];
		// start -> mapping abcd...
		// mapping -> key ka current char -> alphabet

		if (mapping.find(currChar) != mapping.end()) {
			// currChar mapping already present
			// no need to store any mapping here
			// just move to next char in key
			index++;
		}
		else {
			// already not present
			// create mapping and move
			mapping[currChar] = start;
			start++;
			index++;
		}
	}

	// step 2: decode the message
	string decodedMessage = "";

	for (int i = 0; i < message.length(); i++) {

		char msgChar = message[i];
		char mappedChar = mapping[msgChar];
		decodedMessage.push_back(mappedChar);
	}

	return decodedMessage;
}

int main() {
	string key = "the quick brown fox jumps over the lazy dog";
	string message = "vkbs bs t suepuv";

	cout << "The Message: " << decodeMessage(key, message) << endl;	// TC: O(max(N, M))

	return 0;
}