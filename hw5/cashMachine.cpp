#include <iostream>

using namespace std;

int main() {
    int requestedAmount;
    int maxAmount = 100000;
    int denominationBill = 100;

    cout << "Введите сумму снятия: ";
    cin >> requestedAmount;

    if (requestedAmount <= 0) {
        cout << "Недопустимое значение!";
    } else if ((requestedAmount % 100 != 0) && (requestedAmount <= maxAmount)) {
        cout << "Запрашиваемая сумма доступна для выдачи.";
    } else {
        cout << "Выдача запрашиваемой суммы невозможна.";
    }

    return 0;
}