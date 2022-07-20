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

	vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 1, 2}};

	loop(i, arr.size()) {
		for (int number : arr[i]) {
			cout << number << ",";
		}
		cout << endl;
	}
}

