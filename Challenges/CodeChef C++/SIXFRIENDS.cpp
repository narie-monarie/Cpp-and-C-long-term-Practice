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
		cin >> b >> c;
		if ((b * 3) > (c * 2)) {
			cout << c * 2 << endl;

		} else {
			cout << b * 3 << endl;
		}
	}
	return 0;
}

