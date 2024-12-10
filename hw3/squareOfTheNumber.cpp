#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "Введите число для возведения его в квадрат: ";
    cin >> number;
    cout << "Квадрат числа " << number << " равен: " << (number * number);

    return 0;
}