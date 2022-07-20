#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> arr, int S) {
	unordered_set<int> s;
	vector<int> result;

	for (int i = 0; i < arr.size(); i++) {
		int x = S - arr[i];
		if (s.find(x) != s.end()) {  // if its in the table and exists
			result.push_back(x);
			result.push_back(arr[i]);
			return result;
		}
		s.insert(arr[i]);
	}

	return {};
}
int main() {
	vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
	int S = 4;
	auto p = pairSum(arr, S);
	if (p.size() == 0)
		cout << "No Such Pair";
	else
		cout << p[0] << ", " << p[1] << endl;

	return 0;
}
