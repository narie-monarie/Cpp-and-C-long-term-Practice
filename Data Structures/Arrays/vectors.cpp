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

	vector<int> arr;
	arr.push_back(21);
	arr.push_back(2);
	arr.push_back(1);
	arr.push_back(21);
	//	arr.pop_back();
	cout << arr.size() << endl;
	cout << arr.capacity() << endl;
	vector<int> m(10, 7);

	for (auto z : m) cout << z << " ";
	for (auto x : arr) cout << x << " ";
}

