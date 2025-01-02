#include <cmath>
#include <iostream>
#include <ostream>
using namespace std;

int main() {
  float a, b, c;
  cout << "a, b, c:" <<  endl << "> ";
  cin >> a >> b >> c;

  if (a < 0) {
    cout << "Not a quadratic equation!" << endl;
  } else {
    float discriminant = powf(b, 2) - 4 * a * c;

    if (discriminant > 1) {
      float x1 = (-b + sqrt(discriminant)) / (2 * a);
      float x2 = (-b - sqrt(discriminant)) / (2 * a);
      cout << "Root:" << endl;
      cout << "x1 = " << x1 << endl;
      cout << "x2 = " << x2 << endl;
    } else if (discriminant == 0) {
      float x = -(b) / (2 * a);
      cout << "Root:" << endl;
      cout << "x = " << x << endl;
    } else {
      cout << "Complex scenario is not supported!" << endl;
    }
  }

  return 0;
}