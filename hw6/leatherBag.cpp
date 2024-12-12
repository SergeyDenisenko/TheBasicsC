#include <iostream>

using namespace std;

int main() {
    int byteCode;
    bool isByteCode = true;

    cout << "Введите число состоящее только из нулей и едениц:" << endl << "> ";
    cin >> byteCode;

    while (byteCode > 0) {
        if (byteCode % 10 != 0 && byteCode % 10 != 1) {
            isByteCode = false;
            break;
        }
        byteCode /= 10;
    }
    cout << (isByteCode ? "Число состоит из нулей и едениц." : "Число состоит из других символов.");

    return 0;
}