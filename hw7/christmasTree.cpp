#include <iostream>

using namespace std;

int main() {
    int height, width, padding;
    char symbol = '#';
    char placeholder = ' ';

    cout << "Введите выоту ёлочки: ";
    cin >> height;

    width = height * 2 - 1;
    padding = width / 2;

    for (int i=1; i<=height; i++) {
        for (int j=1; j<=width; j++) {
            if (j > padding && j <= (width - padding)) {
                cout << symbol;
            } else {
                cout << placeholder;
            }
        }
        padding--;
        cout << endl;
    }

    return 0;
}