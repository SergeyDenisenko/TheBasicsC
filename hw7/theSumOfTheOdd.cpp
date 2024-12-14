#include <iostream>

using namespace std;

int main() {
    int minOrdinal = 1;
    int n, amount = 0;

    cout << "Введиет число: ";
    cin >> n;

    for (int i = minOrdinal; i<n; i+=2) {
        amount += i;
    }
    cout << "Сумма нечётных чисел: " << amount;

    return 0;
}