#include <iostream>

using namespace std;

int main() {
    string userAnswer;
    int assumption = 0;
    int minNumber = 0;
    int maxNumber = 63;
    int lowerBound = minNumber;
    int upperBound = maxNumber;

    while (lowerBound != upperBound) {
        assumption = (upperBound - lowerBound) / 2 + lowerBound;
        cout << "Ваше число больше " << assumption << "?";
        cin >> userAnswer;

        if (userAnswer == "да") {
            lowerBound = assumption;

            if (lowerBound + 1 == upperBound) {
                assumption = upperBound;
                lowerBound = upperBound;
            }
        } else if (userAnswer == "нет") {
            upperBound = assumption;
            
            if (upperBound - 1 == lowerBound) {
                cout << "Ваше число больше " << lowerBound << "?";
                cin >> userAnswer;
                if (userAnswer == "нет") {
                    assumption = lowerBound;
                    lowerBound = upperBound;
                } else if (userAnswer == "да") {
                    assumption = upperBound;
                    lowerBound = upperBound;
                }
            }
        }
    }
    cout << "Ваше число: " << assumption;

    return 0;
}