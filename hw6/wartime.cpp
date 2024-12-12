#include <iostream>

using namespace std;

int main() {
    int number, buffer, reverseNumber = 0;

    cout << "Введите число: ";
    cin >> number;

    buffer = number;
    while (buffer > 0) {
        reverseNumber *= 10;
        reverseNumber += buffer % 10;
        buffer /= 10;
    }
    cout << reverseNumber;

    return 0;
}