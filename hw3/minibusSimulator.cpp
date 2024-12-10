#include <iostream>

using namespace std;

int main() {
    int amount, income, driverSalary, costFuel, costTaxes, costRepairCar, buffer;
    int numberOfPassengers = 0;
    int ticketPrice = 20;

    int shareSalary = 4;
    int shareFuel = 5;
    int shareTaxes = 5;
    int shareRepair = 5;

    string stop1 = "Улица программистов";
    string stop2 = "Проспект алгоритмов";
    string stop3 = "Бульвар машинного обучения";
    string stop4 = "Переулок безопасности";

    // stop 1

    cout << "Прибываем на остановку «" << stop1 << "». ";
    cout << "В салоне пассажиров: " << numberOfPassengers;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> buffer;
    if (buffer > 0 && buffer <= numberOfPassengers) {
        numberOfPassengers -= buffer;
    }
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> buffer;
    if (buffer > 0) {
        numberOfPassengers += buffer;
    }
    cout << "Отправляемся с остановки «" << stop1 << "». ";
    cout << "В салоне пассажиров: "<< numberOfPassengers << endl;
    cout << "-----------Едем---------" << endl;

    // stop 2

    cout << "Прибываем на остановку «" << stop2 << "». ";
    cout << "В салоне пассажиров: " << numberOfPassengers;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> buffer;
    if (buffer > 0 && buffer <= numberOfPassengers) {
        numberOfPassengers -= buffer;
    }
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> buffer;
    if (buffer > 0) {
        numberOfPassengers += buffer;
    }
    cout << "Отправляемся с остановки «" << stop2 << "». ";
    cout << "В салоне пассажиров: "<< numberOfPassengers << endl;
    cout << "-----------Едем---------" << endl;

    // stop 3

    cout << "Прибываем на остановку «" << stop3 << "». ";
    cout << "В салоне пассажиров: " << numberOfPassengers;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> buffer;
    if (buffer > 0 && buffer <= numberOfPassengers) {
        numberOfPassengers -= buffer;
    }
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> buffer;
    if (buffer > 0) {
        numberOfPassengers += buffer;
    }
    cout << "Отправляемся с остановки «" << stop3 << "». ";
    cout << "В салоне пассажиров: "<< numberOfPassengers << endl;
    cout << "-----------Едем---------" << endl;

    // stop 4

    cout << "Прибываем на остановку «" << stop4 << "». ";
    cout << "В салоне пассажиров: " << numberOfPassengers;
    cout << "Сколько пассажиров вышло на остановке? ";
    cin >> buffer;
    if (buffer > 0 && buffer <= numberOfPassengers) {
        numberOfPassengers -= buffer;
    }
    cout << "Сколько пассажиров зашло на остановке? ";
    cin >> buffer;
    if (buffer > 0) {
        numberOfPassengers += buffer;
    }
    cout << "Отправляемся с остановки «" << stop4 << "». ";
    cout << "В салоне пассажиров: "<< numberOfPassengers << endl;
    cout << "-----------Маршрут завершен---------" << endl;

    // finish

    amount = numberOfPassengers * ticketPrice;
    driverSalary = amount / shareSalary;
    costFuel = amount / shareFuel;
    costTaxes = amount / shareTaxes;
    costRepairCar = amount / shareRepair;
    income = amount - driverSalary - costFuel - costTaxes - costRepairCar;

    cout << "Всего заработали: " << amount;
    cout << "Зарплата водителя: " << driverSalary;
    cout << "Расходы на топливо: " << costFuel;
    cout << "Налоги: " << costFuel;
    cout << "Расходы на ремонт машины: " << costRepairCar;
    cout << "Итого доход: " << income << " руб.";

    return 0;
}