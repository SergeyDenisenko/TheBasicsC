#include <iostream>

using namespace std;

int main() {
    string name;
    int amountDebt, boxOffice;

    cout << "Введите имя должника: ";
    cin >> name;
    cout << "Введите сумму долга: ";
    cin >> amountDebt;

    if (amountDebt == 0) {
        cout << "У меня выходной.";
    } else if (amountDebt < 0) {
        cout << "У вас имеется штраф в размере " << amountDebt << " руб!";
    } else {
        while (amountDebt > 0) {
            cout << "Уважаемый " << name << endl;
            cout << "У вас имеется задолженность в размере " << amountDebt << " руб." << endl;
            cout << "Пожалуйста, погасите вашу задолженность." << endl << "> ";
            cin >> boxOffice;
            amountDebt -= boxOffice;
        }
        
        cout << "Благодарим вас за то, что вы воспользовались нашими услугами." << endl;
        if (amountDebt < 0) {
            cout << "У вас на счету имеется остаток в размере " << -amountDebt << " руб." << endl;
        }
        cout << "Мы будем рады видеть вас снова.";
    }

    return 0;
}