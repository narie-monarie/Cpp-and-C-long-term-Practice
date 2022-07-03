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
	// 5x3 = 15 + 10=25 so 8x3=24
	int a, b, c, d;
	cin >> a;
	while (a--) {
		cin >> b >> c >> d;
		int e = (b * 5 + c * 10) / d;
		cout << e << endl;
	}
	return 0;
}

