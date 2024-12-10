#include <iostream>

using namespace std;

int main() {
    int productCost, deliveryCost, discount, amount;

    cout << "Введите стоимость товара: ";
    cin >> productCost;
    cout << "Введите стоимость доставки: ";
    cin >> deliveryCost;
    cout << "Введите размер скидки: ";
    cin >> discount;
    cout << "----------------------------------" << std::endl;

    amount = productCost + deliveryCost - discount;

    cout << "Стоимость товара: " << productCost << std::endl;
    cout << "Стоимость доставки: " << deliveryCost << std::endl;
    cout << "Скидка: " << discount << std::endl;
    cout << "----------------------------------" << std::endl;
    cout << "Полная стоимость заказа: " << amount << std::endl;

    return 0;
}