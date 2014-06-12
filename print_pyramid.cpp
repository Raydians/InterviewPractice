/*
 * print_pyramid.cpp
 *
 *  Created on: Jun 12, 2014
 *      Author: jlin
 */

#include <iostream>
using namespace std;

// O(n^2)
int main() {
	int h;
	cin >> h;
	// check input
	if (h < 1) return 1;
	for (int i = 1; i <= h; i++) {
		// print spaces
		for (int j = 0; j < h - i; j++) { // number of spaces = h-i for i>=2
			// test cases: i = 1, j <= -1; i = 2, j <= 0, print 1 space; i = 3, j <= 1, print 2 spaces
			cout << " ";
		}
		// print X's
		for (int k = 0; k < 1 + (i-1)*2; k++) {
			// test cases: i = 1, k < 1, print 1 Xs; i = 2, k < 3, print 3 Xs; i = 3, k < 5, print 5 Xs
			cout << "X";
		}
		// new line
		cout << endl;
	}
}



