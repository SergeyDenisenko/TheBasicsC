#include <cstdlib>
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
    float horseX, horseY, pointX, pointY;
    int cellHorseX, cellHorseY, cellPointX, cellPointY;

    float boardWidth = .8f;
    float boardHeight = .8f;
    int numberCellsWidth = 8;
    int numberCellsHeight = 8;
    float cellWidth = boardWidth / numberCellsWidth;
    float cellHeight = boardHeight / numberCellsHeight;

    horseX = input("Введите местоположение коня по оси X: ");
    horseY = input("Введите местоположение коня по оси Y: ");

    cellHorseY = horseY / cellHeight;
    cellHorseX = horseX / cellWidth;

    pointX = input("Введите местоположение точки на доске по оси X: ");
    pointY = input("Введите местоположение точки на доске по оси Y: ");

    cellPointY = pointY / cellHeight;
    cellPointX = pointX / cellWidth;

    cout << "Конь в клетке (" << cellHorseX << ", " << cellHorseY << ")." << endl;
    cout << "Точка в клетке (" << cellPointX << ", " << cellPointY << ")" << endl;

    if (abs((cellHorseX - cellPointX) * (cellHorseY - cellPointY)) == 2) {
        cout << "Да, конь может ходить в эту точку.";
    } else {
        cout << "Нет, конь не может ходить в эту точку.";
    }

    return 0;
}