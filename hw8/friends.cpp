#include <cmath>
#include <iostream>
using namespace std;

float input(string placeholder)
{
    float n;

    while (true) {
        cout << placeholder;
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
    float rotatingHandles, position, numberCombinations, time, seconds;

    rotatingHandles = input("Введите количество крутящихся ручек: ");
    position = input("Введите количество положений: ");
    seconds = input("Введите время затрачиваемое на проверку одной комбинации: ");

    cout << "Вычисляем:" << endl;
    numberCombinations = pow(rotatingHandles, position);
    time = numberCombinations * seconds;

    cout << "Всего комбинаций: " << numberCombinations << endl;
    cout << "Замок гарантировано откроется через " << time << " секунд.";

    return 0;
}