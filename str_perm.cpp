/*
 * str_perm.cpp
 *
 *  Created on: Jun 11, 2014
 *      Author: jlin
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool str_perm1(string a, string b) {
	if (a.length() != b.length()) return false;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if (a == b)
		return true;
	else
		return false;
}

bool str_perm2(string a, string b) {
	if (a.length() != b.length()) return false;
	char a_cstr[a.length() + 1];
	char b_cstr[b.length() + 1];
	strcpy(a_cstr, a.c_str());
	strcpy(b_cstr, b.c_str());
	char ascii[256] = {};
	for (int i = 0; i < a.length(); i++) {
		ascii[(int)a_cstr[i]]++;
		ascii[(int)b_cstr[i]]--;
	}
	for (int i = 0; i < 256; i++) {
		if (ascii[i] < 0) return false;
	}
	return true;
}

int main() {
	string in1, in2;
	cin >> in1 >> in2;
	if (str_perm2(in1, in2)) cout << "true" << endl;
	else cout << "false" << endl;
}


