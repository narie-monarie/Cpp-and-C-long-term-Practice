#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(x, n) for (int x = 0; x < n; ++x)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin >> a;
	while (a--) {
		int b;
		cin >> b;
		int count = 0;
		string s;
		cin >> s;
		loop(i, b) {
			if (s[i] == '1' && s[i + 1] == '0') count++;
		}
		cout << count << endl;
	}
}

