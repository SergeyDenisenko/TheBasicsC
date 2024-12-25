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
    float inX, inY;
    int x, y;
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
    cout << "Фигура находится в клетке (" << x << ", " << y << ").";

    return 0;
}