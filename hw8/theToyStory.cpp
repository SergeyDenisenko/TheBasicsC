#include <cmath>
#include <iostream>
using namespace std;

float input(string placeholder)
{
    float n;

    while (true) {
        cout << placeholder << endl << "> ";
        cin >> n;

        if (cin.fail() || cin.peek() != '\n')
        {
            cerr << "Ошибка ввода данных\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            return n;
        }
    }
}

int main()
{
    float blockWidth, blockHeight, blockLength, cubeCount, countSet;
    float cubeSize = 5.f;

    cout << "Введите размеры бруска:" << endl;
    blockLength = input("X: ");
    blockWidth = input("Y: ");
    blockHeight = input("Z: ");

    cubeCount = (floor(blockLength / cubeSize)) * (floor(blockWidth / cubeSize)) * (floor(blockHeight / cubeSize));
    countSet = pow(floor(cbrt(cubeCount)), 3);

    cout << "Вывод:" << endl;
    cout << "Из этого бруска можно изготовить ";
    cout << cubeCount << " кубиков." << endl;
    cout << "Из них можно составить набор из ";
    cout << countSet << " кубиков.";

    return 0;
}