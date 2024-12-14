#include <iostream>

using namespace std;

int main() {
    int totalLength, symbolLength, start, end;
    char symbol = '!';
    char placeholder = '-';

    cout << "Введите общую длину колонтитула: ";
    cin >> totalLength;
    cout << "Введите количество восклицательных знаков: ";
    cin >> symbolLength;

    start = (totalLength - symbolLength) / 2;
    end = start + symbolLength;

    for (int i=0; i < totalLength; i++) {
        if (i >= start && i < end) {
            cout << symbol;
        } else {
            cout << placeholder;
        }
    }

    return 0;
}