#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> s;

	s.push_back(20);
	s.push_back(2);
	s.push_back(201);
	s.push_back(204);
	s.push_back(205);
	cout << s.size() << endl;
	for (auto x : s) {
		cout << x << " ";
	}
}

