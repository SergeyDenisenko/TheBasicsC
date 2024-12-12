#include <iostream>

using namespace std;

int main() {
    int max = 45;
    int n, value=1;
    cout << "Введите порядковый номер числа из последовательности Фибоначчи: ";
    cin >> n;

    if (n < 1) {
        cout << "Неверное значение последовательности.";
    } else if (n > max) {
        cout << "Номер последовательности не может быть больше " << max;
    } else {
        for (int i=1, a=0, b; i<n; i++) {
            b = value;
            a += b;
            b = a - b;
            a -= b;
            value += b;
            if (value < 0) {
                cout << i;
                break;
            }
        }
        cout << "Число в последовательности: " << value;
    }

    return 0;
}