#include <iostream>
using namespace std;

// f[i] = f[i-1] + f[i-2] + f[i-3]

int stairs(int n) {
  if (n == 0) return 0;
  int a = 1;
  int b = 2;
  int c = 4;
  for (int i = 1; i < n/3; i++) {
	if (n == 1)
		return a;
	if (n == 2)
		return b;
	if (n == 3)
		return c;
	int d = a + b + c;
    a = d;
    int e = a + b + c;
    b = e;
    int f = a + b + c;
    c = f;
    cout << "i: " << i << endl << "     a: " << a << " b: " << b << " c: " << c << endl;
  }
  return a + b + c;
}

int main() {
	int result = stairs(1000);
	cout << result;
}
