#include <iostream>
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
    float lowerBound, upperBound, step;
    float degreesCelsius, degreesFahrenheit;

    float fahrenheit = 32.f;
    float celsius = 0.f;
    float ratio = 1.8f;

    lowerBound = input("Нижняя граница: ");
    upperBound = input("Верхняя граница: ");
    step = input("Шаг: ");

    degreesCelsius = celsius * lowerBound;
    cout << "C\tF" << endl;

    for (; degreesCelsius <= upperBound ; degreesCelsius += step) {
        degreesFahrenheit = degreesCelsius * ratio + fahrenheit;
        cout << degreesCelsius << "\t" << degreesFahrenheit << endl;
    }

    return 0;
}