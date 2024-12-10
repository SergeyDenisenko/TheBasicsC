#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Введите первое число:";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "-----Проверяем-----" << endl;

    if (a == 0 || b == 0) {
        cout << "Ошибка деления!";
    } else if (a % b == 0) {
        cout << "Да, " << a << " делится на " << b << " без остатка!";
    } else {
        cout << "Нет, " << a << " не делится на " << b << " без остатка!";
    }

    return 0;
}