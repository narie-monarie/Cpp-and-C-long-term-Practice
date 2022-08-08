#include <bits/stdc++.h>

#include <cmath>
using namespace std;
int main() {
  int a;
  cin >> a;
  while (a--) {
    double b, c, count = 0;
    cin >> b >> c;
    while (b > 0) {
      count++;
      b = b - 6;
    }
    cout << (count * c) << endl;
  }
}
