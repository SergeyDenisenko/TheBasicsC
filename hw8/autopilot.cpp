#include <cmath>
#include <iostream>
#include <limits>
using namespace std;

float input(string placeholder)
{
    float value;

    while (true) {
        cout << placeholder;
        cin >> value;

        if (cin.fail() || cin.peek() != '\n')
        {
            cerr << "Ошибка ввода данных\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return value;
        }
    }
}

int main()
{
    float pitchAngleDegrees, pitchAngleRadians;
    float minPitchAngleRadians = -0.28f;
    float maxPitchAngleRadians = 0.28f;
    float pi = 3.141592f;
    float angle = 180;

    pitchAngleDegrees = input("Введите угол тангажа в градусах: ");
    pitchAngleDegrees -= angle * (int)(pitchAngleDegrees / angle); 
    pitchAngleRadians = pitchAngleDegrees * pi / angle;

    if (pitchAngleRadians < minPitchAngleRadians || pitchAngleRadians > maxPitchAngleRadians) {
        cout << "Угол небезопасен!";
    } else {
        cout << "Угол безопасен.";
    }

    return 0;
}