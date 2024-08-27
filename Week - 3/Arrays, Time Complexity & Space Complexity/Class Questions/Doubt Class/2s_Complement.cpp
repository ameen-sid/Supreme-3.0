#include<iostream>
#include<vector>
using namespace std;

vector<int> findComplement(vector<int>& binary) {

	int n = binary.size();
	vector<int> ans(n + 1, 0);

	// step 1: flip the bits
	for (int i = n - 1, k = ans.size() - 1; i >= 0; i--, k--)
		ans[k] = binary[i] == 0 ? 1 : 0;
	// now i have flipped bits in my ans array

	// step 2: add 1
	int carry = 1;
	for (int i = ans.size() - 1; i >= 0; i--) {

		int sum = ans[i] + carry;
		ans[i] = sum % 2;
		carry = sum / 2;
	}

	if (carry)
		ans[0] = carry;

	return ans;
}

int main() {
	vector<int> binary{ 0, 0, 0, 0 };
	vector<int> twosComp = findComplement(binary);

	cout << "2's Complement: ";
	for (auto i : twosComp)
		cout << i << " ";
	cout << endl;

	return 0;
}