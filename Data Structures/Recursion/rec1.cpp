#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// TRUST THE FUNCTION
void sayHello(int n) {
  if (n == 0) { // base case
    return;
  }
  sayHello(n - 1); // returns the remainder
  cout << "hello" << n << endl;
}

int sum_n(int n) {
  if (n == 0)
    return 0;
  int left_part = sum_n(n - 1);
  return left_part + n;
}

int sum_ofDigits(int n) {
  if (n == 0)
    return 0;
  int last_digit = n % 10;
  int remaining = n / 10;
  cout << remaining << " " << last_digit << endl;
  return sum_ofDigits(remaining) + last_digit;
}

void paternPrinting(int n) {
  if (n == 0)
    return;
  // paternPrinting(n - 1);
  for (int i = 0; i <= n; i++) {
    cout << "*"
         << " ";
  }
  cout << "\n";

  paternPrinting(n - 1); // paternPrinting(n - 1);

  for (int i = 0; i <= n; i++) {
    cout << "*"
         << " ";
  }
  cout << "\n";
}
int main() {
  // cout << "Hello world";
  // sayHello(10);
  // cout << sum_n(100);
  // cout << sum_ofDigits(1024);
  paternPrinting(6);
}
