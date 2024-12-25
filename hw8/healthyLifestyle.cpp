#include <iostream>
#include <limits>
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
    float numberProteins, amountCarbohydrates, productWeight;

    numberProteins = input("Введите количество белков: ");
    amountCarbohydrates = input("Введите количество углеводов: ");
    productWeight = input("Введите вес продукта: ");

    cout << "----- Считаем -----" << endl;
    cout << "Белков: " << numberProteins / 100 * productWeight << endl;
    cout << "Улеводов: " << amountCarbohydrates / 100 * productWeight << endl;

    return 0;
}