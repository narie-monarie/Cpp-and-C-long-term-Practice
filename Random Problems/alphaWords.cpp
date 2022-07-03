#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int clubEntry(string word) {
	for (int i = 0; i < word.size(); i++) {
		if (word[i] == word[i + 1]) return (word[i] - 96) * 4;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << clubEntry("Hello");
}

