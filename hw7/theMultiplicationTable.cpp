#include <iostream>

using namespace std;

int main() {
    int start = 1;
    int end = 10;
    int n;
    cout << "Введите число: ";
    cin >> n;

    for (int i = start; i <= end; i++) {
        cout << n << " x " << i << " = " << (n * i) << endl;
    }

    return 0;
}