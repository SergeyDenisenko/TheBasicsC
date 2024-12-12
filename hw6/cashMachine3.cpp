#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    int hashCode = 42;

    while (true) {
        cout << "Введите пин-код (четыре числа, разделенные пробелом):" << endl;
        cin >> a >> b >> c >> d;

        if ((a + b + c + d) == hashCode) {
            cout << "Ввод корректный";
            break;
        } else {
            cout << "Ввод некорректный, попробуйте еще раз" << endl;
        }
    }

    return 0;
}