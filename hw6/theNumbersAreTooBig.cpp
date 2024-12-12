#include <iostream>

using namespace std;

int main() {
    int n, count = 0;
    cout << "Введите число: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        for (;n!=0; n/=10, count++);
    }
    cout << "Цифр в числе: " << count;

    return 0;
}