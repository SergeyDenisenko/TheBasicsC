#include <iostream>
#include <limits>

using namespace std;

float input(string placeholder)
{
    float min=0, max=1;
    float n;

    while (true) {
        cout << placeholder;
        cin >> n;

        if (cin.fail() || cin.peek() != '\n' || n < min || n > max)
        {
            cerr << "Ошибка ввода данных\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return n;
        }
    }
}

int main() {
    float inX, inY, offsetX, offsetY;
    int x, y;
    int ratio = 10;
    float boardWidth = .8f;
    float boardHeight = .8f;
    int numberCellsWidth = 8;
    int numberCellsHeight = 8;
    float cellWidth = boardWidth / numberCellsWidth;
    float cellHeight = boardHeight / numberCellsHeight;

    inX = input("Введите местоположение фигуры по оси X: ");
    inY = input("Введите местоположение фигуры по оси Y: ");

    y = inY / cellHeight;
    x = inX / cellWidth;
    offsetY =  (y + (cellHeight * ratio / 2)) / ratio - inY;
    offsetX =  (x + (cellWidth * ratio / 2)) / ratio - inX;

    cout << "Фигура находится в клетке (" << x << ", " << y << ")." << endl;
    cout << "Поправьте положение фигуры на (" << offsetX << ", " << offsetY << ")." << endl;

    return 0;
}