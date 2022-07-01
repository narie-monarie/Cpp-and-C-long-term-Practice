#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
	map<string, int> name_age;
	name_age["Monari"] = 100;
	name_age.insert(pair<string, int>("Narie", 12));
	cout << name_age["Monari"] << "\n";

	for (auto const &pair : name_age) {
		cout << pair.first << ": ";
		cout << pair.second << "\n";
	}
}

