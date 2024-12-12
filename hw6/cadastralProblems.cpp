#include <iostream>

using namespace std;

int main() {
    int plotArea;
    int maxPlotArea = 1000000;
    bool isSquare = false;

    cout << "Введите площадь участка: ";
    cin >> plotArea;

    if (plotArea < 0 || plotArea > maxPlotArea) {
        cout << "Недопустимое значение!";
    } else {
        for (int n=2, s=0; s<=plotArea; n++) {
            s = n * n;
            if (s == plotArea) isSquare = true;
        }
        cout << (isSquare ? "Введенная площадь участка является квадратом." : "Введенная площадь участка не является квадратом!");
    }

    return 0;
}