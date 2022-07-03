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
	double a, b, c, d;
	cin >> a;
	while (a--) {
		cin >> b >> c >> d;
		if (b - c == 0) {
			cout << d << endl;
		} else if (c > b) {
			cout << d << endl;
		} else if (b > c) {
			double f = (b / c);
			cout << ceil(f) * d << endl;
		}
	}
}

