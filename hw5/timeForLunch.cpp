#include <iostream>

using namespace std;

int main() {
    int countMcNuggets;
    int countBox1 = 0;
    int countBox2 = 0;
    int box1 = 6;
    int box2 = 9;
    bool canBuy = false;

    cout << "Введите количество макнаггетсов: ";
    cin >> countMcNuggets;

    int buffer = countMcNuggets;
    while (buffer > 0) {
        if (buffer == box1 || buffer == box2) {
            if (buffer == box1) {
                countBox1++;
            } else if (buffer == box2) {
                countBox2++;
            }
            canBuy = true;
            break;
        }

        buffer -= box1;
        countBox1++;
    }

    if (canBuy) {
        cout << "Можно купить: " << endl;
        cout << "Коробок по " << box1 << " штук: " << countBox1 << endl;
        cout << "Коробок по " << box2 << " штук: " << countBox2 << endl;
        cout << "Итого получается макнаггетсов: " << countMcNuggets;
    } else {
        cout << "Покупка невозможна!";
    }

    return 0;
}