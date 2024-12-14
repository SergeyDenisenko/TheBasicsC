#include <iostream>

using namespace std;

int main () {
    int width, height;
    char verticalLines = '|';
    char horizontalLines = '-';
    char upperEnd = '^';
    char righEnd = '>';
    char intersections = '+';
    char placeholder = ' ';

    cout << "Введите ширину и высоту оси: ";
    cin >> width >> height;

    for (int i=0; i < height; i++) {
        for (int j=0; j < width; j++) {
            if ((i == height / 2) && (j == width / 2)) {
                cout << intersections;
            } else if (i == 0 && (j == width / 2)) {
                cout << upperEnd;
            } else if ((i == height / 2) && (j + 1) == width) {
                cout << righEnd;
            } else if (i == height / 2) {
                cout << horizontalLines;
            } else if (j == width / 2) {
                cout << verticalLines;
            } else {
                cout << placeholder;
            }

            if ((j + 1) == width) {
                cout << endl;
            }
        }
    }

    return 0;
}