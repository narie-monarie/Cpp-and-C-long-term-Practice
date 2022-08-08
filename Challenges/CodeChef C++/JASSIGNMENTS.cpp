#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  while (a--) {
    int b;
    cin >> b;
    if (b <= 7)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}

