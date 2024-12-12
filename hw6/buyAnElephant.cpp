#include <iostream>
#include <string>

using namespace std;

int main() {
    string teaser = ", купи слона.";
    string userName;
    string str;

    cout << "Как тебя зовут?" << endl << "> ";
    cin >> userName;

    cout << userName << teaser << endl << "> ";
    
    while (true) {
        getline(cin, str);
        cout << "Все говорят \"" << str << "\", а ты" << teaser << endl << "> ";
    }

    return 0;
}