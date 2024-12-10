#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Введите число: ";
    cin >> n;
    cout << "-----Проверяем-----" << endl;

    if (n % 2 == 0) {
        cout << "Число " << n << " — чётное";
    } else {
        cout << "Число " << n << " — нечётное";
    }

    return 0;
}