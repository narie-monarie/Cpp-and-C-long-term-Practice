#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c, d;
	cin >> a;
	while (a--) {
		cin >> b >> d;
		int c = b / 10;
		cout << d * c << endl;
	}
	return 0;
}

