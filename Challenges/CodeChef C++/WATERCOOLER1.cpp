#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  while (a--) {
    int b, c, d;
    cin >> b >> c >> d;
    if (b * d < c)
      cout << "YES \n";
    else if (b * d >= c)
      cout << "NO\n";
  }
}
