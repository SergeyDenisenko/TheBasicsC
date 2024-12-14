#include <iostream>

using namespace std;

int main() {
    int count = 1;
    int amountFood = 100;
    int expenditure = 4;

    cout << "Всего гречки было на начало подсчёта: " << amountFood << " кг" << endl;
    amountFood-=expenditure;
    for (; amountFood > 0; count++, amountFood-=expenditure) {
        cout << "После " << count << " месяца у вас в запасе останется " << amountFood << " кг гречки" << endl;
    }
    cout << "После " << count << " месяца гречка закончится";
    

    return 0;
}