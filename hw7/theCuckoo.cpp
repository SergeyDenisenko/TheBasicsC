#include <iostream>

using namespace std;

int main() {
    int hour;
    string tickTack = "Ку-ку!";
    cout << "Введите, который час: ";
    cin >> hour;

    if (hour >= 0 && hour <= 23) {
        for (int i=0; i<hour; i++) {
            cout << tickTack << endl;
        }
    } else {
        cout << "ошибка ввода!";
    }

    return 0;
}