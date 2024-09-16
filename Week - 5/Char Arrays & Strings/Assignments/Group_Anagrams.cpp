#include<bits/stdc++.h>
using namespace std;

// LeetCode

array<int, 256> hashing(string s) {

	array<int, 256> hash = { 0 };
	for (int i = 0; i < s.size(); i++)	hash[s[i]]++;
	return hash;
}

vector< vector<string> > groupAnagrams(vector<string>& strs) {

	map< array<int, 256>, vector<string> > map;
	for (auto str : strs) {
		map[hashing(str)].push_back(str);
	}

	vector< vector<string> > ans;
	for (auto it = map.begin(); it != map.end(); it++)
		ans.push_back(it->second);

	return ans;
}

vector< vector<string> > groupAnagrams2(vector<string>& strs) {

	unordered_map<string, vector<string> > map;
	for (auto str : strs) {

		string s = str;
		sort(s.begin(), s.end());
		map[s].push_back(str);
	}

	vector< vector<string> > ans;
	for (auto it = map.begin(); it != map.end(); it++)
		ans.push_back(it->second);

	return ans;
}

int main() {
	vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };

	vector< vector<string> > ans = groupAnagrams(strs);	// O(NK) -> S. O(NK)
	// vector< vector<string> > ans = groupAnagrams2(strs);	// O(NKlogK) -> S. O(NK)

	for (auto vs : ans) {

		cout << "[";
		for (auto s : vs) {
			cout << '"' << s << "\" ";
		}
		cout << "]";
	}

	return 0;
}