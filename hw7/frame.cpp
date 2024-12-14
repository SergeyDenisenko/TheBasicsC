#include <iostream>

using namespace std;

int main() {
    int width, height;
    char verticalLines = '|';
    char horizontalLines = '-';
    char symbol = ' ';

    cout << "Введите ширину и высоту рамки: ";
    cin >> width >> height;

    for (int i=0; i < height; i++) {
        for (int j=0; j < width; j++) {
            if (j == 0) {
                cout << verticalLines;
            } else if (j + 1 == width) {
                cout << verticalLines << endl;
            } else if (i == 0 || (i + 1) == height) {
                cout << horizontalLines;
            } else {
                cout << symbol;
            }
        }
    }

    return 0;
}