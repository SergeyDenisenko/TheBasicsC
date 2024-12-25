#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

float input(string placeholder)
{
    float n;

    while (true) {
        cout << placeholder << endl << "> ";
        cin >> n;

        if (cin.fail() || cin.peek() != '\n')
        {
            cerr << "Ошибка ввода данных\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return n;
        }
    }
}

int main()
{
    float in, userKc;
    float kc = 1.f;
    int gravitsap = 2;
    int chatles = 4400;

    in = input("Введите количество чатлов: ");

    cout << "----- Считаем -----" << endl;
    userKc = round(in / (kc * chatles) * 100) / 100;
    cout << in << " чатлов - ";
    cout << userKc << " КЦ" << endl;
    cout << "Можно купить: " << round(userKc * gravitsap * 100) / 100;
    cout << " гравицап.";

    return 0;
}