#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "-----Проверяем-----" << endl;

    if (a < b) {
        cout << "Наименьшее число: " << a;
    } else if (b < a) {
        cout << "Наименьшее число: " << b;
    } else {
        cout << "Числа равны!";
    }

    return 0;
}