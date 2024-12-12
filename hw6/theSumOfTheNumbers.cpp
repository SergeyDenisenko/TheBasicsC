#include <iostream>

using namespace std;

int main() {
    int numberOfNumbers, buffer;
    int amount = 0;

    cout << "Сколько чисел нужно сложить?" << endl << "> ";
    cin >> numberOfNumbers;

    cout << "Введите числа для сложения:" << endl;
    for (int i=0; i<numberOfNumbers; i++) {
        cin >> buffer;
        amount += buffer;
    }

    cout << "Итог: " << amount;
    return 0;
}