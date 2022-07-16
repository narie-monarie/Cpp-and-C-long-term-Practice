#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define loop(x, n) for (int x = 0; x < n; ++x)
void permutate(string s, int l, int r) {
  if (l == r) {
    cout << s << endl;
    return;
  }

  for (int i = l; i < r; i++) {
    swap(s[i], s[l]);
    permutate(s, l + 1, r);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  permutate("ABC", 0, 3);
}

