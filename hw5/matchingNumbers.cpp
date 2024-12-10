#include <iostream>

using namespace std;

int main() {
    int a, b, c, count = 0;
    cout << "Введите три числа (через пробел): ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        count = 3;
    } else if (a == b || b == c || a == c) {
        count = 2;
    }
    cout << count << " совпадающих";

    return 0;
}