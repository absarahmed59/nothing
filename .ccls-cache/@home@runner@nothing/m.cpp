#include <iostream>
using namespace std;

int Equation(int w, int x, int y, int z) {
  if (w * w + x * x + y * y == z * z)
    return 0;
  else
    return -1;
}

void m() {
  int a, b, c, d;
  cout << "Enter value of a: ";
  cin >> a;
  cout << "Enter value of b: ";
  cin >> b;
  cout << "Enter value of c: ";
  cin >> c;
  cout << "Enter value of d: ";
  cin >> d;
  Equation(a, b, c, d);
}