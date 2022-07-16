#include <bits/stdc++.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int b_search(int *A, int key, int length) {
	int low = 0, high = length - 1, middle;

	while (low <= high) {
		middle = (low + high) / 2;
		if (key == A[middle])
			return middle;
		else if (key < A[middle])
			high = middle - 1;
		else
			low = middle + 1;
	}

	return -1;
}

int main() {
	int numbers[15] = {
	    4, 8, 10, 15, 16, 18, 21, 24, 27, 29, 35, 37, 39, 46, 49,
	};

	int index = b_search(numbers, 18, 15);
	if (index != 1)
		cout << "Found at index " << index << endl;
	else
		cout << "Not Found" << endl;
	return 0;
}

