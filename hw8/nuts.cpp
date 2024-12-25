#include <iostream>
#include <limits>

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

int main() {
    float price, totalWeight, amount;

    price = input("Введите цену товара за 100 грамм: ");
    totalWeight = input("Введите итоговый вес покупки: ");

    amount = totalWeight / 100 * price;
    cout << "Стоимость покупки за " << totalWeight;
    cout << " грамм: " << amount << " рублей.";

    return 0;
}