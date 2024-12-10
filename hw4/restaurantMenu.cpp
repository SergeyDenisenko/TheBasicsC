#include <iostream>

using namespace std;

int main() {
    int numberDayOfWeek;
    cout << "Введите день недели (от 1 до 7): ";
    cin >> numberDayOfWeek;

    if (numberDayOfWeek < 1 || numberDayOfWeek > 7) {
        cout << "Ошибка выбора дня недели!";
    } else {
        string nameDay, firstCourse, secondCourse, drink;

        if (numberDayOfWeek == 1) {
            nameDay = "понедельник";
            firstCourse = "Суп";
            secondCourse = "Пюре";
            drink = "Чай черный";
        } else if (numberDayOfWeek == 2) {
            nameDay = "вторник";
            firstCourse = "Харчо";
            secondCourse = "Салат «Оливье»";
            drink = "Морс";
        } else if (numberDayOfWeek == 3) {
            nameDay = "среда";
            firstCourse = "Щи";
            secondCourse = "Салат «Мемоза»";
            drink = "Компот";
        } else if (numberDayOfWeek == 4) {
            nameDay = "четверг";
            firstCourse = "Гороховый суп";
            secondCourse = "Салат «Цезарь» с креветками";
            drink = "Морс";
        } else if (numberDayOfWeek == 5) {
            nameDay = "пятница";
            firstCourse = "Плов";
            secondCourse = "Салат «Классический»";
            drink = "Чай зеленый";
        } else if (numberDayOfWeek == 6) {
            nameDay = "суббота";
            firstCourse = "Харчо";
            secondCourse = "Салат «Оливье»";
            drink = "Морс";
        } else if (numberDayOfWeek == 7) {
            nameDay = "воскресенье";
            firstCourse = "Гороховый суп";
            secondCourse = "Салат «Цезарь» с креветками";
            drink = "Морс";
        }

        cout << "Меню сегодня (" << nameDay << "):" << endl;
        cout << firstCourse << endl;
        cout << secondCourse << endl;
        cout << drink;
    }

    return 0;
}