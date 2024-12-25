#include <iostream>
#include <limits>
using namespace std;

float input(string placeholder)
{
    float min=0, max=1;
    float n;

    while (true) {
        cout << placeholder;
        cin >> n;

        if (cin.fail() || cin.peek() != '\n' || n < min || n > max)
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
    float health, magicResistance, fireballPower, damage;

    health = input("Введите количество здоровья: ");
    magicResistance = input("Введите сопротивляемость магии: ");

    while (health > 0) {
        cout << "Укажите мощность огненого шара: ";
        cin >> fireballPower;
        damage = fireballPower - (fireballPower * magicResistance);
        health -= damage;

        cout << "Урон " << fireballPower << ", сопротивляемость " << magicResistance << ", по орку будет нанесено " << damage << " урона;" << endl;
    }

    return 0;
}