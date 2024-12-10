#include <iostream>

using namespace std;

int main() {
    int income, buffer, tax = 0;
    int fraction1 = 13;
    int fraction2 = 20;
    int fraction3 = 30;

    int point1 = 10000;
    int point2 = 50000;

    cout << "Введите ваш доход: ";
    cin >> income;

    buffer = income;
    if (buffer > point2) {
        tax += fraction3 / 100.0 * (buffer - point2);
        buffer = point2;
    }
    if (buffer > point1) {
        tax += fraction2 / 100.0 * (buffer - point1);
        buffer = point1;
    }

    tax += fraction1 / 100.0 * buffer;
    cout << "Сумма налога: " << tax;
    return 0;
}