#include <iostream>

using namespace std;

int main() {
    int speed, height;
    int minSpeed = 780;
    int maxSpeed = 850;
    int minHeight = 9000;
    int maxHeight = 9500;

    cout << "Введите скорость и высоту: ";
    cin >> speed >> height;

    if (
        (speed >= minSpeed && speed <= maxSpeed)
        &&
        (height >= minHeight && height <= maxHeight)
    ) {
        cout << "Полёт нормальный!";
    } else {
        cout << "Есть отклонения от эшелона!";
    }

    return 0;
}