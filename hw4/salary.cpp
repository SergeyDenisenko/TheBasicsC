#include <iostream>

using namespace std;

int main() {
    int mean, maxSalary, minSalary;
    int salary1, salary2, salary3;

    cout << "Введите зарплату первого сотрудника: ";
    cin >> salary1;
    cout << "Введите зарплату второго сотрудника: ";
    cin >> salary2;
    cout << "Введите зарплату третьего сотрудника: ";
    cin >> salary3;
    cout << "-----Считаем-----" << endl;

    mean = (salary1 + salary2 + salary3) / 3;
    if (salary1 > salary2) {
        maxSalary = salary1;
        minSalary = salary2;
    } else {
        maxSalary = salary2;
        minSalary = salary1;
    }

    if (maxSalary < salary3) {
        maxSalary = salary3;
    } else if (minSalary > salary3) {
        minSalary = salary3;
    }

    cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей" << endl;
    cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << (maxSalary - minSalary) << " рублей" << endl;
    cout << "Средняя зарплата в отделе: " << mean << " рублей";

    return 0;
}