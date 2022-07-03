#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(x, n) for (int x = 0; x < n; ++x)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a;
	while (a--) {
		cin >> b;
		if (b % 3 == 0) {
			cout << 0 << endl;
		} else if ((b + 1) % 3 == 0) {
			cout << (b + 1) - b << endl;
		} else if ((b + 2) % 3 == 0) {
			cout << (b + 2) - b << endl;
		}
	}
}

