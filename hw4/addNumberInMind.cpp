#include <iostream>

using namespace std;

int main() {
    int a, b, amount;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "Введите их сумму: ";
    cin >> amount;
    cout << "-----Проверяем-----" << endl;

    if (amount == (a + b)) {
        cout << "Верно!";
    } else {
        cout << "Ошибка! Верный результат: " << (a + b);
    }

    return 0;
}