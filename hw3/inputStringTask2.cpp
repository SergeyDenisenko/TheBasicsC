#include <iostream>

using namespace std;

int main() {
    string userLogin, userPassword;
    string login = "root";
    string password = "pass";

    do {
        cout << "Введите логин: ";
        cin >> userLogin;
        cout << "Введите пароль: ";
        cin >> userPassword;
    } while(login != userLogin && password != userPassword);

    cout << "Вы успешно зашли!";
    return 0;
}