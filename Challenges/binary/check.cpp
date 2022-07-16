#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(x, n) for (int x = 0; x < n; ++x)

bool solve(int num) {
	cin >> num;
	int rem, rev = 0;
	int v = num;
	while (num > 0) {
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	cout << rev << endl;
	cout << num << endl;
	if (v == rev) {
		return true;
	} else {
		return false;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << solve(43);
}

