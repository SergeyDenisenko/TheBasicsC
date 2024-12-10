#include <iostream>

using namespace std;

int main() {
    int dailyGrowth, nightFade, beginHeight, finalHeight;

    cout << "Введите начальную высоту бамбука: ";
    cin >> beginHeight;
    cout << "Введите величину ежедневного прироста: ";
    cin >> dailyGrowth;
    cout << "Введите размер съедаемого гусеницами бамбука за одну ночь: ";
    cin >> nightFade;

    finalHeight = beginHeight + ((dailyGrowth - nightFade)  * 2) + (dailyGrowth / 2);
    cout << "Высота бамбука в середине третьего дня будет: " << finalHeight;

    return 0;
}