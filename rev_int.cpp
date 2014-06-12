/*
 * rev_int.cpp
 *
 *  Created on: Jun 12, 2014
 *      Author: jlin
 */

#include <iostream>
using namespace std;

void reverse_recursive(int i, int &sum) {
	if (i) {
		int r = i%10;
		sum = sum*10 + r;
//		cout << "sum: " << sum << endl;
		reverse_recursive(i/10, sum);
	}
}

int reverse(int i) {
	int rev_i = 0;
	reverse_recursive(i, rev_i);
	return rev_i;
}

int reverse_iterative(int i) {
	int orig = i;
	int rev = 0;
	while (orig > 0) {
		int r = orig%10;
		rev = rev*10 + r;
		orig /= 10;
	}
	return rev;
}

int main() {
	int in;
	cin >> in;
	int rev = reverse(in);
	cout << rev << endl;
	rev = reverse_iterative(in);
	cout << rev << endl;
}

