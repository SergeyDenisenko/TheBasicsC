#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Введите длины трех деревянных палочек (через пробел): ";
    cin >> a >> b >> c;

    if ((a + b <= c) || (b + c <= a) || (c + a <= b)) {
        cout << "Треугольник сложить нельзя!";
    } else {
        cout << "Можно сложить треугольник.";
    }

    return 0;
}