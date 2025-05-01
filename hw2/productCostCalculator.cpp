#include <iostream>

int main() {
    int productCost = 25600;
    int deliveryCost = 500;
    int discount = 700;
    int amount = productCost + deliveryCost - discount;

    std::cout << "Стоимость товара: " << productCost << std::endl;
    std::cout << "Стоимость доставки: " << deliveryCost << std::endl;
    std::cout << "Скидка: " << discount << std::endl;
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Полная стоимость заказа: " << amount << std::endl;

    return 0;
}