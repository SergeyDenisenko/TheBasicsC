#include <iostream>

using namespace std;

int main() {
    int water, milk, choice;
    int consWaterAmerican = 300;
    int consWaterLatte = 30;
    int consMilkLatte = 270;
    int choiceAmerican = 1;
    int choiceLatte = 2;
    int countAmerican = 0;
    int countLatte = 0;
    cout << "Введите количество воды в мл: ";
    cin >> water;
    cout << "Введите количество молока в мл: ";
    cin >> milk;

    for (; (water >= consWaterAmerican) || (water >= consWaterLatte && milk >= consMilkLatte);) {
        cout << "Выберите напиток (" << choiceAmerican << " — американо, " << choiceLatte << " — латте): ";
        cin >> choice;

        if (choice == choiceAmerican && water >= consWaterAmerican) {
            cout << "Выбранный напиток: Американо" << endl;

            countAmerican++;
            water -= consWaterAmerican;
            cout << "Ваш напиток готов." << endl;
        } else if (choice == choiceAmerican && water < consWaterAmerican) {
            cout << "Выбранный напиток: Американо" << endl;
            cout << "Недостаточно воды!" << endl;
        } else if (choice == choiceLatte && (water >= consWaterLatte && milk >= consMilkLatte)) {
            cout << "Выбранный напиток: Латте" << endl;

            countLatte++;
            water -= consWaterLatte;
            milk -= consMilkLatte;
            cout << "Ваш напиток готов." << endl;
        } else if (choice == choiceLatte && water < consWaterLatte) {
            cout << "Выбранный напиток: Латте" << endl;
            cout << "Недостаточно воды!" << endl;
        } else if (choice == choiceLatte && milk < consMilkLatte) {
            cout << "Выбранный напиток: Латте" << endl;
            cout << "Недостаточно молока!" << endl;
        } else {
            cout << "Ошибка выбора!" << endl;
        }
    }

    cout << "***Отчёт***" << endl;
    cout << "Ингредиентов осталось:" << endl;
    cout << "Вода: " << water << " мл" << endl;
    cout << "Молоко: " << milk << " мл" << endl;
    cout << "Кружек американо приготовлено: " << countAmerican << endl;
    cout << "Кружек латте приготовлено: " << countLatte;

    return 0;
}