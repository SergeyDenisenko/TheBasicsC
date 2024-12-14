#include <iostream>

using namespace std;

int main() {
    string userPassword;
    string password = "root";

    for (; password != userPassword ;) {
        cout << "Введите пароль: ";
        cin >> userPassword;
    }
    cout << "Вход выполнен.";

    return 0;
}