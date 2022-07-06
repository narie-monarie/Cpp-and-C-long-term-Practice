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

    int a, b, c;
    cin >> a;

    cin >> b >> c;
    int d = b + c;

    if (a / d >= 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

