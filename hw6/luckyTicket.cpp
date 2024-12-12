#include <iostream>

using namespace std;

int main() {
    int number, count=0, part1=0, part2=0, part3=0;
    int minNumber = 4;
    cout << "Введите номер билета: ";
    cin >> number;

    for (int n=number; n>0; n/=10, count++);
    if (count < minNumber) {
        cout << "Неверный номер билета.";
    } else {
        int half = count / 2;
        bool isOdd = count % 2 != 0;
        
        for (int i=0; i<count; i++, number/=10) {
            if (i < half) {
                part1 += number % 10;
            } else if (isOdd && i == half) {
                part3 += number % 10;
            } else {
                part2 += number % 10;
            }
        }

        if (
            (isOdd && part1 == part2 && part2 == part3) ||
            (!isOdd && part1 == part2)
        ) {
            cout << "Билет счастливый!";
        } else {
            cout << "Повезёт в следующий раз!";
        }
    }

    return 0;
}