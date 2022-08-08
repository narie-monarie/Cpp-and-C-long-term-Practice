#include <iostream>
using namespace std;

int main() {
  int a;
  cin >> a;
  while (a--) {
    int b, c;
    cin >> b >> c;
    cout << (b * 10) + (c * 5) << endl;
  }
  return 0;
}

