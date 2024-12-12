#include <iostream>
#include <string>

using namespace std;

int main() {
    int numberOfRepetitions;
    string reminderText;

    cout << "Введите количество напоминаний: ";
    cin >> numberOfRepetitions;
    cout << "Введиет текст напоминания: ";
    getline(cin, reminderText);

    while (numberOfRepetitions > 0) {
        cout << reminderText;
        numberOfRepetitions--;
    }

    return 0;
}