/*
 * convertStrToInt.cpp
 *
 *  Created on: Jun 12, 2014
 *      Author: jlin
 */

#include <iostream>
#include <cmath>
using namespace std;

int convertStrToInt(char* str, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum = sum*10 + (str[i] - '0');
	}
	return sum;
}

char* convertIntToStr(int i) {
	string result = "";
	int orig = i;
	while (orig > 0) {
		int r = orig%10;
//		cout << "r: " << r << endl;
		char num = r + '0';
		result = num + result;
//		cout << "result: " << result << endl;
		orig /= 10;
	}
	char *result_cstr = new char[result.length() + 1]; // need to be allocated to heap to be returned to main
	strcpy(result_cstr, result.c_str());
	return result_cstr;
}

int main() {
//	string in;
//	int size;
//	cin >> in;
//	size = in.length();
//	char in_cstr[size];
//	strcpy(in_cstr, in.c_str());
//	cout << convertStrToInt(in_cstr, size) << endl;
	int in2;
	cin >> in2;
	cout << convertIntToStr(in2) << endl;
}



