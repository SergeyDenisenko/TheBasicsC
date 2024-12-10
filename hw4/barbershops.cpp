#include <iostream>

using namespace std;

int main() {
    int numberOfClients, numberOfEmployees, workersNeeded, workingHoursPerMonth;
    int durationWorkShift = 8;
    int numberDaysInMonth = 30;
    int numberDaysOff = 8;

    cout << "Введите количество дней в месяце: ";
    cin >> numberDaysInMonth;
    cout << "Введите количество выходных дней в месяце: ";
    cin >> numberDaysOff;
    cout << "Введите длительность рабочей смены: ";
    cin >> durationWorkShift;

    cout << "Введите количество мужчин обслуживаемых в месяц: ";
    cin >> numberOfClients;
    cout << "Введите количество работающих барберов: ";
    cin >> numberOfEmployees;

    // количество рабочих часов в месяц на каждого барбера
    workingHoursPerMonth = (numberDaysInMonth - numberDaysOff) * durationWorkShift;

    // необходимое количество барберов для обслкживания всех клиентов
    workersNeeded = (numberOfClients / workingHoursPerMonth);
    if ((numberOfClients % durationWorkShift) != 0) ++workersNeeded;

    if (workersNeeded > numberOfEmployees) {
        cout << "Для обслуживания " << numberOfClients << " клиентов в месяц, нужно " << workersNeeded << " барберов." << endl;
        cout << "Нехватает барберов: " << workersNeeded - numberOfEmployees;
    } else if (workersNeeded < numberOfEmployees) {
        cout << "Для обслуживания " << numberOfClients << " клиентов в месяц, нужно " << workersNeeded << " барберов." << endl;
        cout << "Избыток барберов: " << numberOfEmployees - workersNeeded;
    } else {
        cout << "барберов достаточно!";
    }

    return 0;
}