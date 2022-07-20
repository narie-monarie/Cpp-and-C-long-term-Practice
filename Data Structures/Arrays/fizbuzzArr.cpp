#include <bits/stdc++.h>

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define loop(x, n) for (int x = 0; x < n; ++x)

vector<string> fizzbuzz(int n) {
  vector<string> result;

  for (int i = 1; i <= n; i++) {
    if (i % 15 == 0)
      result.push_back("FizzBuzz");
    else if (i % 5 == 0)
      result.push_back("Buzz");
    else if (i % 3 == 0)
      result.push_back("Fizz");
    else
      result.push_back(to_string(i));
  }
  return result;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int x;
  cin >> x;
  fizzbuzz(x);

  for (auto x : fizzbuzz(x))
    cout << x << ", ";
}
