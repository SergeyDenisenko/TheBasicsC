#include <iostream>

using namespace std;

int main() {
    int numerator, denominator;
    bool isNegative = false;
    cout << "Введите числитель: ";
    cin >> numerator;
    cout << "Введите знаменатель: ";
    cin >> denominator;

    if (numerator == 0 || denominator == 0) {
        cout << "Некорректное число!";
        return 0;
    }

    if (numerator < 0) {
        numerator = -numerator;
        isNegative = true;
    }
    if (denominator < 0) {
        denominator = -denominator;
        isNegative = true;
    }

    if (denominator % numerator == 0) {
        denominator /= numerator;
        numerator /= numerator;
    } else {
        int divider = 2;

        while (divider <= numerator) {
            if ((numerator % divider == 0) && (denominator % divider == 0)) {
                while ((numerator % divider == 0) && (denominator % divider == 0)) {
                    numerator /= divider;
                    denominator /= divider;
                }
                break;
            }
            divider++;
        }
    }
    cout << "Результат: " << (isNegative ? "-":"");
    cout << numerator << "/" << denominator;

    return 0;
}