#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> c;
	while (c--) {
		cin >> a >> b;
		if (b < a) {
			cout << "YES\n";
		} else if (a == b) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}

