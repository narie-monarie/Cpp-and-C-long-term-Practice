#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int sumFive(vector<int> arr) {
	int sum = 0;
	for (auto x : arr)
		if (x > 5) sum += x;
	return sum;
}
int main() {
	vector<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	cout << sumFive(s);
}

