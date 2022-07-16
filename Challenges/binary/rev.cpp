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

	int a, rem, rev = 0;
	cin >> a;
	while (a > 0) {
		rem = a % 10;
		rev = rev * 10 + rem;
		a /= 10;
	}
	cout << rev;
}

