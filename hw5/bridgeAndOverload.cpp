#include <iostream>

using namespace std;

int main() {
    int carWeight1, carWeight2, carWeight3, carWeight4;
    int maxWeight = 1200;

    cout << "Введите массу четырех автомобилей (через пробел): ";
    cin >> carWeight1 >> carWeight2 >> carWeight3 >> carWeight4;

    if ((carWeight1 <= maxWeight && carWeight1 > 0) && (carWeight2 <= maxWeight && carWeight2 > 0) && (carWeight3 <= maxWeight && carWeight3 > 0) && (carWeight4 <= maxWeight && carWeight4 > 0)) {
        cout << "Вес автомобилей в пределах допустимого.";
    } else {
        cout << "Перегрузка!";
    }

    return 0;
}