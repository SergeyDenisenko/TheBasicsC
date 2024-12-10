#include <iostream>

using namespace std;

int main() {
    int experiencePoints;
    int level = 1;
    int point1 = 1000;
    int point2 = 2500;
    int point3 = 5000;

    cout << "Введите число очков опыта: ";
    cin >> experiencePoints;

    if (experiencePoints < 0) {
        cout << "Введено неверное значение!";
    } else {
        if (experiencePoints >= point3) {
            level = 4;
        } else if (experiencePoints >= point2) {
            level = 3;
        } else if (experiencePoints >= point1) {
            level = 2;
        }
        cout << "-----Считаем-----" << endl;
        cout << "Ваш уровень: " << level;
    }

    return 0;
}