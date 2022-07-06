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

		if (b >= (c * 30))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}

