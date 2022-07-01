#include <iostream>
#include <iterator>
#include <string>
using namespace std;

struct Rectangle {
	int len;
	int wid;
};
int main() {
	struct Rectangle rec[53];
	struct Rectangle r = {10, 5};  // Declaration + initialization
	r.len = 15;
	r.wid = 10;
	cout << "Area of a rectangle is " << r.len * r.wid << endl;
	int a[] = {2, 3, 4, 5, 6};
	int len = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < len; i++) cout << a[i] << endl;
	cout << a[0];
}

