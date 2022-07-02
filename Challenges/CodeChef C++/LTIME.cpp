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
	int a, b;
	cin >> a;
	while (a--) {
		cin >> b;
		if (b >= 1 && b <= 4) {
			cout << "YES" << endl;

		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}

