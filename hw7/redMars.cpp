#include <iostream>

using namespace std;

int main() {
    char command;
    int width = 15;
    int length = 20;
    int x = width / 2;
    int y = length / 2;

    for (;;) {
        cout << "[Программа]: Марсоход находится на позиции " << x << ", " << y << ", введите команду:" << endl;
        cout << "[Оператор]: ";
        cin >> command;

        if ((command == 'W') && (y < length)) {
            // север
            y++;
        } else if ((command == 'S') && (y > 0)) {
            // юг
            y--;
        } else if ((command == 'A') && (x > 0)) {
            // запад
            x--;
        } else if ((command == 'D') && (x < width)) {
            // восток
            x++;
        } else if (command == 'Q') {
            // выход
            cout << "Завершение работы!" << endl;
            break;
        } else if (command != 'W' && command != 'S' && command != 'A' && command != 'D' && command != 'Q') {
            cout << "Неверная команда!" << endl;
        } else {
            cout << "Марсоход не может продолжать движение в выбранном направлении!" << endl;
        }
    }

    return 0;
}