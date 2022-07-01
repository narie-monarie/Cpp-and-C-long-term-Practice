#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c, d;
	vector<int> s;
	cin >> d;
	while (d--) {
		cin >> a >> b >> c;
		s.push_back(a);
		s.push_back(b);
		s.push_back(c);
		sort(s.begin(), s.end());
		cout << s[1] << endl;
		s.pop_back();
		s.pop_back();
		s.pop_back();
	}
	return 0;
}

