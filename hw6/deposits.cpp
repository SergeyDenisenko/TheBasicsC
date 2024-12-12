#include <iostream>

using namespace std;

int main() {
    int year = 0;
    int minDeposit = 1;
    int minPercent = 1;
    int deposit, percent, limit;

    cout << "Введите размер вклада: ";
    cin >> deposit;
    cout << "Введите процентную ставку: ";
    cin >> percent;
    cout << "Введите желаемую сумму: ";
    cin >> limit;


    if (deposit < minDeposit) {
        cout << "Минимальная сумма вклада " << minDeposit << " руб.";
    } else if (percent < minPercent) {
        cout << "Процентная ставка не может быть ниже " << minPercent << "%";
    } else {
        while (deposit < limit) {
            deposit += percent / 100.0 * deposit;
            year++;
        }
        cout << "Придётся подождать: " << year << " лет";
    }

    return 0;
}