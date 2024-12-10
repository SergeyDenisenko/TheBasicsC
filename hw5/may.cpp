#include <iostream>

using namespace std;

int main() {
    int day, startDayOfWeek, offset;
    cout << "Введите номер дня недели с которого начинается масяц (от 1 до 7): ";
    cin >> startDayOfWeek;

    if (startDayOfWeek >= 1 && startDayOfWeek <= 7) {
        string nameDay;
        offset = startDayOfWeek - 1;

        switch (startDayOfWeek) {
            case 1:
                nameDay = "понедельник";
                break;
            case 2:
                nameDay = "вторник";
                break;
            case 3:
                nameDay = "среда";
                break;
            case 4:
                nameDay = "четверг";
                break;
            case 5:
                nameDay = "пятница";
                break;
            case 6:
                nameDay = "суббота";
                break;
            case 7:
                nameDay = "воскресенье";
                break;
        }
        cout << "Выбранный день недели начала месяца: " << nameDay << endl;

        cout << "Введите число: ";
        cin >> day;

        if (day < 1) {
            cout << "Неверное значение!";
        } else if ((day >= 1 && day <= 5) || (day >= 8 && day <= 10)) {
            cout << "Праздничные выходные!";
        } else if (((day + offset) % 7 == 0) || ((day + offset + 1) % 7 == 0)) {
            cout << "Выходной день.";
        } else {
            cout << "Рабочий день.";
        }
    } else {
        cout << "Неверное значение!";
    }

    return 0;
}