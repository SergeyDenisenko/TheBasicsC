#include <iostream>

using namespace std;

int main() {
    int amount, costProduct1, costProduct2, costProduct3;
    int costThreshold = 10000;
    int discount = 10;

    cout << "Введите стоимость первого товара: ";
    cin >> costProduct1;
    cout << "Введите стоимость второго товара: ";
    cin >> costProduct2;
    cout << "Введите стоимость третьего товара: ";
    cin >> costProduct3;
    cout << "----------Считаем----------" << endl;

    amount = costProduct1 + costProduct2 + costProduct3;
    if (amount >= costThreshold) {
        amount -= amount * (discount / 100.0);
        cout << "Размер скидки составил " << discount << "%" << endl;
    }
    cout << "Сумма чека: " << amount << " руб.";

    return 0;
}