#include <iostream>

using namespace std;

int main () {
    int shiftDuration = 480;
    int makeOrder = 2;
    int collectOrder = 4;
    int numberOfClients = shiftDuration / (makeOrder + collectOrder);

    cout << "Эта программа рассчитает, сколько клиентов успеет обслужить кассир за смену." << endl;
    cout << "Введите длительность смены в минутах: " << shiftDuration << endl;
    cout << "Сколько минут клиент делает заказ? " << makeOrder << endl;
    cout << "Сколько минут кассир собирает заказ? " << collectOrder << endl;
    cout << "-----Считаем-----" << endl;
    cout << "За смену длиной " << shiftDuration << " минут кассир успеет обслужить " << numberOfClients << " клиентов." << endl;

    return 0;
}