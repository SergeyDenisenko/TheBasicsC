#include <iostream>

using namespace std;

int main() {
    int pin;
    int hashCode = 42;

    while (true) {
        int userHash = 0;
        cout << "Введите пин-код :" << endl;
        cin >> pin;

        while (pin > 0) {
            userHash += pin % 10;
            pin /= 10;
        }

        if (userHash == hashCode) {
            cout << "Ввод корректный";
            break;
        } else {
            cout << "Ввод некорректный, попробуйте еще раз" << endl;
        }
    }

    return 0;
}