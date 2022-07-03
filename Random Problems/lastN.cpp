#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isLastN(string w) {
	if (w[w.size() - 1] == 'n') {
		cout << "true";
		return true;
	}

	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << isLastN("sannan");
}

