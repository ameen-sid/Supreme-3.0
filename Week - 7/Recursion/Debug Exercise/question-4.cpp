// Debug the code.

// TODO: Incomplete

int returnPermutations(string input, string output[]) {
	int count = 0;
	string created;
	for (int i = 0;input[i] != '\0' && input.length() > 1;i++) {
		char ch = input[i];
		int start = count;
		created = input.substr(0, i) + input.substr(i);
		count = count + returnPermutations(created, output + count);
		for (int k = start;k < count;k++) {
			output[k] = ch + output[k];
		}
	}
	if (input.length() == 1) {
		for (int k = 0;input[k] == '\0';k++) {
			output[count] = output[count] + input[k];
			count++;
		}
	}

	return count;
}