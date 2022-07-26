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
	int x, y, z;
	cin >> x;
	while (x--) {
		cin >> y >> z;
		cout << (y * 4) + z << "\n";
	}
	return 0;
}

