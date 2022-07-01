#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a == b) {
		cout << "NO\n";
	} else if (b < a) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}
	return 0;
}

