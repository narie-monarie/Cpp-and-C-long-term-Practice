#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
typedef long long LL;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string x;
  cin >> x;
  set<char> s;
  for (int i = 0; i < x.length(); i++) {
    s.insert(x[i]);
  }
  if (s.size() % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
}

