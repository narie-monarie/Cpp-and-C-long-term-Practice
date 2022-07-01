#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	while (a--) {
		cin >> b >> c;
		if (b > c) {
			cout << b - c << endl;
		} else {
			cout << 0 << endl;
		}
	}
	return 0;
}

