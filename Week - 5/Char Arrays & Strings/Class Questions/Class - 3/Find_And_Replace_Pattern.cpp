#include<bits/stdc++.h>
using namespace std;

// LeetCode

void normalise(string& str) {

	unordered_map<char, char> mapping;
	char start = 'a';

	for (int i = 0; i < str.length(); i++) {

		char strChar = str[i];
		if (mapping.find(strChar) == mapping.end()) {
			// if mapping pehle se present nhi hai
			// then create and move ahead
			mapping[strChar] = start;
			start++;
		}
	}

	// mapping has done
	// string ko update normalise kardo using mapping
	for (int i = 0; i < str.length(); i++) {

		char mappedChar = mapping[str[i]];
		str[i] = mappedChar;
	}
	// toh ab hamne string ko normalise update krdiya
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

	vector<string> ans;

	// normalise karo pattern ko
	normalise(pattern);

	// let's traverse on words -> normalise them -> check ke woh pattern ko follow krte hai ya nhi
	for (int i = 0; i < words.size(); i++) {

		// ith word
		string currWord = words[i];
		normalise(currWord);

		// ab check karo ki woh pattern ko follow krta hai ya nhi
		if (!currWord.compare(pattern))
			ans.push_back(words[i]);
	}

	return ans;
}

int main() {
	vector<string> words{ "abc", "deq", "mee", "aqq", "dkd", "ccc" };
	string pattern = "abb";

	vector<string> ans = findAndReplacePattern(words, pattern);
	cout << "Print ans:\n";
	for (auto i : ans)
		cout << i << endl;

	return 0;
}