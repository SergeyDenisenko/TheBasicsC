#include <iostream>

using namespace std;

int main() {
    int requestedAmount;
    int maxAmount = 150000;
    int banknote1 = 100;
    int banknote2 = 200;
    int banknote3 = 500;
    int banknote4 = 1000;
    int banknote5 = 2000;
    int banknote6 = 5000;

    cout << "Введите сумму снятия: ";
    cin >> requestedAmount;

    if (requestedAmount <= 0) {
        cout << "Недопустимое значение!";
    } else if (requestedAmount > maxAmount) {
        cout << "Была превышена максимально допустимая сумма вывода средств!";
    } else if (requestedAmount % banknote1 != 0) {
        cout << "Купюры запрошенного номинала отсутствуют!";
    } else {
        int buffer = requestedAmount;

        if (buffer >= banknote6) {
            cout << banknote6 << ": " << buffer / banknote6 << " шт." << endl;
            buffer = buffer % banknote6;
        }
        if (buffer >= banknote5) {
            cout << banknote5 << ": " << buffer / banknote5 << " шт." << endl;
            buffer = buffer % banknote5;
        }
        if (buffer >= banknote4) {
            cout << banknote4 << ": " << buffer / banknote4 << " шт." << endl;
            buffer = buffer % banknote4;
        }
        if (buffer >= banknote3) {
            cout << banknote3 << ": " << buffer / banknote3 << " шт." << endl;
            buffer = buffer % banknote3;
        }
        if (buffer >= banknote2) {
            cout << banknote2 << ": " << buffer / banknote2 << " шт." << endl;
            buffer = buffer % banknote2;
        }
        if (buffer >= banknote1) {
            cout << banknote1 << ": " << buffer / banknote1 << " шт." << endl;
            buffer = buffer % banknote1;
        }
    }

    return 0;
}