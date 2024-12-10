#include <iostream>

using namespace std;

int main() {
    int currentDay, currentMonth, currentYear;
    int clientDay, clientMonth, clientYear;
    int acceptableAge = 18;

    cout << "Введите текущую дату (день месяц год): ";
    cin >> currentDay >> currentMonth >> currentYear;
    cout << "Введите дату рождения клиента (день месяц год): ";
    cin >> clientDay >> clientMonth >> clientYear;

    if (
        ((currentYear - clientYear) >= acceptableAge) &&
        (currentMonth <= clientMonth) &&
        (currentDay > clientDay)
    ) {
        cout << "Можно" << endl;
    } else {
        cout << "Нельзя" << endl;
    }

    return 0;
}