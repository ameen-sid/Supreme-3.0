#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// GFG

vector<int> factorial(int N) {

	vector<int> ans;
	ans.push_back(1);

	int carry = 0;
	for (int i = 2; i <= N; i++) {
		for (int j = 0; j < ans.size(); j++) {
			int x = ans[j] * i + carry;
			ans[j] = x % 10;
			carry = x / 10;
		}

		while (carry) {
			ans.push_back(carry % 10);
			carry /= 10;
		}
	}

	reverse(ans.begin(), ans.end());
	return ans;
}

int main() {
	int n = 50;

	vector<int> ans = factorial(n);

	cout << "Answer: ";
	for (int i : ans)
		cout << i << " ";
	cout << endl;

	return 0;
}