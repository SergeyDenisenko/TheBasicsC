#include <iostream>

using namespace std;

int main() {
    int hour;
    string tickTack = "Ку-ку!";

    cout << "Введите, который час: ";
    cin >> hour;

    if (hour >= 0 && hour <= 23) {
        while (hour-- > 0) {
            cout << tickTack << endl;
        }
    } else {
        cout << "ошибка ввода!";
    }

    return 0;
}