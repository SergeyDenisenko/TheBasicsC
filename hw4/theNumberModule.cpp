#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (n < 0) n = -n;
    cout << "Модуль числа: " << n;

    return 0;
}