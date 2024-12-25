#include <cmath>
#include <iostream>
using namespace std;

float input(string placeholder)
{
    float n;

    while (true) {
        cout << placeholder;
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
    float heightAboveGroundLevel;
    int floor = 1;
    float distanceBetweenFloors = 3.975f;

    heightAboveGroundLevel = input("Введите высоту пола остановившейся кабины лифта над уровнем земли: ");
    
    floor += round(heightAboveGroundLevel / distanceBetweenFloors);
    cout << "Большая часть кабины находится на " << floor << " этаже.";

    return 0;
}