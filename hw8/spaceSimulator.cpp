#include <cmath>
#include <iostream>
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
    float mass, thrust, time, distance;

    mass = input("Введите вес звездолета: ");
    thrust = input("Введите силу тяги: ");
    time = input("Введите время работы двигателей: ");

    distance = (thrust / mass) * pow(time, 2.0) / 2;
    cout << "Звездолет окажется на расстоянии " << distance;
    cout << "  от первоначального положения";

    return 0;
}