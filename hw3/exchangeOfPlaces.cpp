#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    cout << "----------Введенные данные----------" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "----------Меняем местами----------" << endl;
    a -= b;
    b += a;
    a = b - a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}