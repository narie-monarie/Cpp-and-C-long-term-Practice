#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	while (a--) {
		cin >> b >> c;
		if (b > c) {
			cout << "A" << endl;
		} else {
			cout << "B" << endl;
		}
	}
	return 0;
}

