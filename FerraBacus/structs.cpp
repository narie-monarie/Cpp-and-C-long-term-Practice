#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Player {
	string name;
	int score;
};

int main() {
	struct Player p1;
	p1.name = "Ferra";
	p1.score = 100;
	cout << p1.name << endl;
	cout << p1.score << endl;
}

