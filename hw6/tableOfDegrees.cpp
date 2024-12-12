#include <iostream>

using namespace std;

int main() {
    int a, n;
    cout << "Введите основание степени и N первых степеней числа: " << endl;
    cin >> a >> n;

    for (int i = 1, total = a; i <= n; i++) {
        total *= a;
        cout << a << "^" << (i + 1) << " = " << total << endl;
    }

    return 0;
}