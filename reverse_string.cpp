/*
 * reverse_string.cpp
 *
 *  Created on: Jun 11, 2014
 *      Author: jlin
 */

#include <iostream>
#include <string>
using namespace std;

void reverse(char* str) {
	char *end = str;
	char tmp;
	if (str) {
		while (*end) {
			end++;
		}
		end--;
		// end at last char in str before '\0'
		while (str < end) {
//			tmp = *str;
//			*str++ = *end;
//			*end = tmp;
			swap(*str, *end);
			str++;
			end--;
		}
	}
}

void swap(char &a, char &b) {
	char temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	string in;
	cin >> in;
	char in_cstr[in.length()];
	strcpy(in_cstr, in.c_str());
	reverse(in_cstr);
	cout << in_cstr;
}


