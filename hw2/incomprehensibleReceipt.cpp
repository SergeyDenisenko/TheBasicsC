#include <iostream>

using namespace std;

int main() {
    int fullPrice = 4000000;
    int numberOfEntrances = 10;
    int numberOfApartments = 40;
    int costPerPerson = fullPrice / (numberOfEntrances * numberOfApartments);

    cout << "Приветствуем вас в калькуляторе квартплаты!" << endl;
    cout << "Введите сумму, указанную в квитанции: " << fullPrice << endl;
    cout << "Сколько подъездов в вашем доме? " << numberOfEntrances << endl;
    cout << "Сколько квартир в каждом подъезде? " << numberOfApartments << endl;
    cout << "----Считаем-----" << endl;
    cout << "Каждая квартира должна платить по " << costPerPerson << " руб." << endl;

    return 0;
}