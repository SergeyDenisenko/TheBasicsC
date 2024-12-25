#include <iostream>
#include <limits>

using namespace std;

float input(string placeholder, float min, float max)
{
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

int main() {
    float minBrightness = 0;
    float maxBrightness = 255;

    float leftLimit, rightLimit, point;

    leftLimit = input("Введите яркость левой границы градиента: ", minBrightness, maxBrightness);
    rightLimit = input("Введите правую границу градиента: ", minBrightness, maxBrightness);
    point = input("Введите положение точки между границами: ", 0, 1);

    cout << "Яркость точки: ";
    cout << (rightLimit - leftLimit) * point + leftLimit;

    return 0;
}