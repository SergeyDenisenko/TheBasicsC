#include <iostream>

using namespace std;

int main() {
    int averageSpeed, traveledDistance;
    int maxTime = 2;
    int distance = 200;

    cout << "Введите среднюю скорость движения: ";
    cin >> averageSpeed;

    traveledDistance = averageSpeed * maxTime;
    if (traveledDistance >= distance) {
        cout << "Вы приехали";
    } else {
        cout << "Вы проехали " << traveledDistance << " км." << endl;
        cout << "Осталось проехать " << distance - traveledDistance << " км.";
    }

    return 0;
}