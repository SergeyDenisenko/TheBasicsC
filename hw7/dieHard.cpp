#include <iostream>

using namespace std;

int main() {
    int maxTIme = 10;
    string userAnswer;

    for (; maxTIme > 0 || userAnswer != "да"; maxTIme--) {
        cout << "Хотите перерезать провод сейчас?" << endl << "> ";
        cin >> userAnswer;
    }

    if (maxTIme > 0) {
        cout << "Бомба обезврежена" << endl;
        cout << "До взрева оставалось " << maxTIme << " секунд";
    } else {
        cout << "Бомба взорвалась";
    }

    return 0;
}